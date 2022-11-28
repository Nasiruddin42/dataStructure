#include<iostream>
using namespace std ;

int maxSize = 100 , top = - 1 ;
int array[100] ;

bool isFull(){
    if(top == maxSize - 1){
        return true ;
    }
    else{
        return false ;
    }
}

bool isEmpty(){
    if(top == -1){
        return true ;
    }
    else{
        return false ;
    }
}

void push(int item){
    top = top + 1 ;
    array[top] = item ;
}

void pop(){
    top = top - 1 ;
}

int getTop(){
    return array[top] ;
}

void printarray(){
    for(int i = 0 ; i <= top ; i++){
        cout << array[i] << " " ;
    }
    cout << endl;
}

int main(){

    for( ; ; ){
        cout << "your array is : " ;
        printarray() ;

        // cout << "to exit press 4" << endl ;
        // cout << "to get top pop element press 1" << endl ;
        // cout << "to push value press 2 " << endl ;
        // cout << "to get top element press 3 " << endl ;

        int it ;
        cin >> it ;
        if(it == 4){
            break ;
        }
        if(it == 1){
            if(isEmpty()){
                cout << "Underflow" << endl;
            }
            else{
                pop() ;
            }
            continue ;
        }
        if(it == 2){
            int value ;
            cin >> value ;
            if(top == maxSize){
                cout << "overflow " << endl;
            }
            else{
                push(value) ;
            }
            continue ;
        }
        if(it == 3){
           if(isEmpty()){
              cout << "your array is empty" << endl ;
           }
           else {
            cout << "get top element : " << getTop() << endl;
           }
        }
    }
}