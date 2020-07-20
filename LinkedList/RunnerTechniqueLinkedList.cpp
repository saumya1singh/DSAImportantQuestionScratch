#include <iostream>
using namespace std;

//Runner Technique to find the mid point of linked List

class node{
    public:
    int data;
    node* next;

    node(int d){
        data= d;
        next= NULL;
    }
};


void insertAtTail(node*&head, int data){
    
    if(head==NULL){
        head= new node(data);
        return;
    }
    node* temp= head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next= new node(data);
    return;
}


void builtList(node*&head){
    int data;
    cin>> data;

    while(data!=-1){
        insertAtTail(head, data);
        cin>> data;
    }
}


void print(node*head){
    while(head!=NULL){
        cout<< head->data<<"->";
        head= head->next;
    }
    cout<< endl;
}


void operator>>(istream &is, node*&head){
    builtList(head);
}

void operator<<(ostream &os, node*head){
    print(head);
}


void reverseList(node*&head){
    node*p= NULL;
    node*current= head;
    node*n;
    while(current != NULL){
        n= current->next;
        current->next= p;
        p= current;
        current= n;
    }
    head= p;
}


//Runner Technique to find mid point of linked list
node* midPoint(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node*slow= head;
    node*fast= head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast= fast->next->next;
        slow= slow->next;
    }
    return slow;
}


int main() {
    node*head= NULL;

    cin>> head;
    cout<< head;
   
    node*mid= midPoint(head);
    cout<< mid->data <<endl;
    
}
