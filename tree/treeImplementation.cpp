#include<bits/stdc++.h>
using namespace std ;
#define maxSize 100

int bstArray[maxSize] ;

void insertElement(int item){
    int index = 1 ;
    while(bstArray[index] != -maxSize){
        if(item > bstArray[index]){
            index = 2 * index + 1 ;
        }
        else{
            index = 2 * index ;
        }
    }
    bstArray[index] = item ;

   // cout << bstArray[index] << " " ;
}

bool isFound(int item){
    int index = 1 ;
    while(bstArray[index] != -maxSize){
        if(item == bstArray[index]){
            return true ;
        }
        else if(item > bstArray[index]){
            index = 2 * index + 1 ;
        }
        else {
            index = 2 * index ;
        }
    }
    return false ;
}

int getPositon(int item){
    int index = 1 , position = -1 ;
    while(bstArray[index] != -maxSize){
        if(item == bstArray[index]){
            position = index ;
            break ;
        }
        else if(item > bstArray[index]){
            index = 2 * index + 1 ;
        }
        else{
            index = 2 * index ;
        }
    }
    return position ;
}

int main(){
    for(int i = 0 ; i < maxSize ; i++){
        bstArray[i] = -maxSize ;
    }
    int num ;
    cin >> num ;
    for(int i = 0 ; i < num ; i++){
        int item ;
        cin >> item ;
        if(isFound(item)){
            cout << item << " is found and position at " << getPositon(item) << endl;
        }
        else
           insertElement(item) ;
    }
    for(int i = 1 ; i < maxSize ; i++){
        if(bstArray[i] != -maxSize){
            cout << bstArray[i] << "(" << i << ")" << " " ;
        }
    }

}