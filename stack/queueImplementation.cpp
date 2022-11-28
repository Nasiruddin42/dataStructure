#include<iostream>
using namespace std ;
#define N 5 

int queue[10] ;
int front = -1 ;
int rear = -1 ;

void insertQueue(int item){
    if(front == -1 && rear == -1){
        front = rear = 0 ;
        queue[rear] = item ;
    }
    else if((rear + 1) % N  == front){
        cout << "queue is fulled" << endl ;
    }
    else{
        rear = (rear + 1)% N ;
        queue[rear] = item ;
    }
}

void deleteQueue(){
    if(front == -1 && rear == -1){
        cout << "underflow" << endl;
    }
    else if(front==rear){
       front = rear = -1 ;
    }
    else{
        cout << queue[front] << endl;
        front = (front + 1) % N ;
    }
    
}
void display(){
    if(front == -1 && rear == -1){
        cout << "The queue is empty" << endl;
    }
    else{
        for(int i = front ; i <= rear ; i++){
            cout << queue[i] << " " ;
        }
        cout << endl;
    }
}

int main(){
    
    insertQueue(2);
    insertQueue(4);
    insertQueue(1);
    display() ;
    deleteQueue() ;
    deleteQueue() ;
    display() ;
}