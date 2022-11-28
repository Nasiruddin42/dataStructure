#include<bits/stdc++.h>
using namespace std ;

struct Node{
    int data ;
    struct Node* link ;
};
struct Node* head = NULL ;
struct Node* getNewNode(){
    struct Node* newNode = (struct Node*) malloc (sizeof(struct Node)) ;

    return newNode ;
}

void insertElementInLinkedList(int item){
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

void deleteFirstNode(){
    if(head == NULL){
        cout << "empty linked list" << endl;
    }
    else {
        struct Node* temporary = head ;
        head = head -> link ;
        temporary -> link = NULL ;
        free(temporary) ;
    }
}

int main(){
    int numberOfElement ;
    cin >> numberOfElement ;
    for(int i = 0 ; i <  numberOfElement ; i++){
        int item ;
        cin >> item ;
        insertElementInLinkedList(item) ;
    }
    printLinkedList() ;
    deleteFirstNode() ;
    printLinkedList() ;

}