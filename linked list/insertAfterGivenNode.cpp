#include<bits/stdc++.h>
using namespace std ;

int listSize = 0 ;

struct Node{
    int data ;
    struct Node* link ;
};
struct Node* head = NULL ;
struct Node* getNewNode(){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    return newNode ;
}
void insertAfterGivenNode(int new_data , int position){
    struct Node* newNode = getNewNode() ;
    newNode -> data = new_data ;
    newNode -> link = NULL ;

    if(head == NULL){
        head = newNode ;
    }
    else if(position == 1){
        newNode -> link = head ;
        head = newNode ;
    }
    else {
        struct Node* traverse = head ;
        int currentPosition = 1 ;
        while(currentPosition < (position - 1)){
            currentPosition++;
            traverse = traverse -> link ;
        }
        newNode -> link = traverse -> link ;
        traverse -> link = newNode ;
    }
    listSize++ ;
}
void insertInLast(int item){
    struct Node* newNode = getNewNode() ;
    newNode -> data = item ;
    newNode -> link = NULL ;
    if(head == NULL){
        head = newNode ;
    }
    else{
        struct Node* traverse = head ;
        while(traverse -> link != NULL){
            traverse = traverse -> link ;
        }
        traverse -> link = newNode ;
    }
}
void printLinkedList(){
    struct Node* traverse = head ;
    while(traverse != NULL){
        cout << traverse -> data << " " ;
        traverse = traverse -> link ;
    }
    cout << '\n' ;
}

int main(){
    
    while(1){
        cout << "your list is : " ;
        printLinkedList() ;
        char operation ;
        cin >> operation ;
        if(operation == 'I'){
            int data , position ;
            cin >> data >> position ;
            if((position - 1) > listSize){
                cout << "your position is invalid" << endl ;
                continue ;
            }
            insertAfterGivenNode(data, position) ;
        }
        else if(operation == 'L'){
            int data ;
            cin >> data ;
            insertInLast(data) ;
        }
        else{
            return 0 ;
        }
    }
}