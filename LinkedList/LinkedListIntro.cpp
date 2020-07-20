#include <iostream>
using namespace std;

//Linked List Intro

class node{
    public:
    int data;
    node* next;

    node(int d){
        data= d;
        next= NULL;
    }
};


void insertAtHead(node* &head, int data){
    node* temp= new node(data);

    temp->next= head;
    head= temp;
}


void print(node* head){
    while(head!=NULL){
        cout<< head->data<< "-->";
        head= head->next;
    }
    cout<<"NULL";
    cout<<endl;
}



int main() {
    node* head= NULL;
    insertAtHead(head, 5);    
    insertAtHead(head, 7);
    insertAtHead(head, 9);

    print(head);
    print(head);
}
