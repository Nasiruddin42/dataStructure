#include<bits/stdc++.h>
using namespace std ;

struct Node{
    int data ;
    struct Node* link ;
};
struct Node* head = NULL ;
struct Node* getNewNode(){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)) ;
     
    return newNode ;
}
void insertInLinkedList(int item){
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
}

int main(){
    int numberOfElement;
    cin >> numberOfElement ;
    for(int i = 0 ; i < numberOfElement ; i++){
        int item ;
        cin >> item ;
        insertInLinkedList(item) ;
    }
    printLinkedList() ;
}