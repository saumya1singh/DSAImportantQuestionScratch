#include <iostream>
using namespace std;

//Circular LL
//Head Insertion and Traversal

class node{
    public:
    int data;
    node *next;

    node(int d){
        data= d;
    }
};



void print(node *head){
    node *temp= head;
    while(temp->next != head){
        cout<< temp->data<<"->";
        temp= temp->next;
    }
    cout<<temp->data<<"END";
}



//Insertion At Head
void insertAtHead(node *&head, int data){    
    node* newPointer= new node(data);
    if(head==NULL){
            newPointer->next= newPointer;
            head= newPointer;
            return;
    }
    node* temp= head;
    newPointer->next= head;
    
    while(temp->next!=head){
        temp= temp->next;
    }
    temp->next= newPointer;
    head= newPointer;
    return;
}



int main() {
    node* head= NULL;
    insertAtHead(head, 5);    
    insertAtHead(head, 4);    
    insertAtHead(head, 3);        
    insertAtHead(head, 2);        
    insertAtHead(head, 1);
    print(head);
}
