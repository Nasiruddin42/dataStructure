#include<bits/stdc++.h>
using namespace std ;
#define maxSize 100

int binaryArray[maxSize] ;

void makeTree(int item){
    queue < int > queueName ;
    int root = 0 ;
    if(binaryArray[root] == - 1){
        binaryArray[root] = item ;
        return ;
    }
    queueName.push(root) ;
    
    while(queueName.size() != 0){
        int currentNode = queueName.front() ;
        queueName.pop() ;
        int left = 2 * currentNode + 1 ;
        int right = 2 * currentNode + 2 ;
        if(binaryArray[left] == -1){
            binaryArray[left] = item ;
            break ;
        }
        else if(binaryArray[right] == -1 ){
            binaryArray[right] = item ;
            break ;
        }
        else{
            queueName.push(left) ;
            queueName.push(right) ;
        }
        
    }

}

void printTreePreorder(int currentRoot){
    if(binaryArray[currentRoot] == -1){
        return ;
    }
    cout << binaryArray[currentRoot] << " " ;
    printTreePreorder(2 * currentRoot + 1) ;
    printTreePreorder(2 * currentRoot + 2) ;
}
void printTreeInorder(int currentRoot){
    if(binaryArray[currentRoot] == -1){
        return ;
    }
    printTreeInorder(2 * currentRoot + 1) ;
    cout << binaryArray[currentRoot] << " " ;
    printTreeInorder(2 * currentRoot + 2) ;
}
void printTreePostorder(int currentRoot){
    if(binaryArray[currentRoot] == -1 ){
        return ;
    }
    printTreePostorder(2 * currentRoot + 1) ;
    printTreePostorder(2 * currentRoot + 2) ;
    cout << binaryArray[currentRoot] << " " ;
}

int main(){
    for(int i = 0 ; i < maxSize ; i++){
        binaryArray[i] = -1 ;
    }
    int num ;
    cin >> num ;
    for(int i = 0 ; i < num ; i++){
        int item ;
        cin >> item ;
        makeTree(item) ;
    }

    int root = 0 ;
    cout << "Preorder : " ;
    printTreePreorder(root) ;
    cout << endl;

    cout << "Inorder : " ;
    printTreeInorder(root) ;
    cout << endl ;

    cout << "Postorder : " ;
    printTreePostorder(root) ;
    cout << endl ;

    return 0 ;
}