#include <iostream>
using namespace std;

//LinkedList Recursive Search

class node{
    public:
    int data;
    node*next;

    node(int d){
        data= d;
        next= NULL;
    }
};


//Head Insertion
void insertAtHead(node*&head, int data){
    
    if(head==NULL){
        head= new node(data);
        return;
    }
    else{
        node*temp= new node(data);
        temp->next= head;
        head= temp;
    }
}

//Linkedlist length
int len(node*head){
    int len=0;
    while(head!=NULL){
        head= head->next;
        len++;
    }
    return len;
}

//Tail insertion
void insertAtTail(node*&head, int data){
    node*temp= head;
    while(temp->next!=NULL){
        temp= temp->next;        
    }
    temp->next= new node(data);
}


//Middle Insertion
void insertAtMiddle(node*&head, int p, int data){
      if(head==NULL){
        insertAtHead(head, data);
    }
    else if(p>len(head)){
        insertAtTail(head, data);
    }else{
        int jumps= 1;
        node*temp= head;
        while(jumps<=p-1){
            temp= temp->next;
            jumps= jumps+1;
        }
        node*n= new node(data);
        n->next= temp->next;
        temp->next= n;
    }
}


//Print List
void print(node*head){
    while(head!=NULL){
        cout<< head->data<<"-->";
        head= head->next;
    }
     cout<< endl;
}


//Delete from head
void deleteAtHead(node*&head){
    if(head==NULL){
        cout<<"Empty List"<< endl;
    }else{
        node*temp= head;
        head= head->next;
        delete temp;
    }
}


//Delete at tail
void deleteAtTail(node*head){
    if(head==NULL){
        cout<<"Empty List"<< endl;
    }else{
        node*prev= NULL;
        node*temp= head;
        while(temp->next!=NULL){
            prev= temp;
            temp= temp->next;
        }
        prev->next= NULL;
        delete temp;
    }
}


//Delete from Middle
void deleteAtMiddle(node*&head, int p){
    if(head==NULL){
        cout<<"Empty List"<< endl;
        return;
    }else if(p>len(head)){
        cout<< "Deletion at "<<p<< " Not possible";
        cout<< endl;
        return;
    }else{
        int jump= 1;
        node*prev= NULL;
        node*temp= head;
        while(jump<=p-1){
            prev= temp;
            temp= temp->next;
            jump++;
        }
        prev->next= temp->next;     
    }
}


//Search item
bool searchRecursive(node*head, int key){
    //Base
    if(head==NULL){
        return false;
    }

    //Recursive Part
    if(head->data == key){
        return true;
    }else{
        return searchRecursive(head->next, key);
    }
}


bool searchIteratively(node*head, int key){

    while(head!=NULL){
        if(head->data == key){
            return true;
        }
        head= head->next;
    }
    return false;
}

int main() {
    node*head= NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtTail(head, 9);
    insertAtMiddle(head, 1, 8);
    insertAtTail(head, 10);
    // deleteAtHead(head);
    // deleteAtTail(head);
    // deleteAtMiddle(head, 3);

    if(searchIteratively(head, 8)){
        cout<< "Element Found"<< endl;
    }else{
        cout<< "Element Not Found"<< endl;
    }

    cout<< len(head);
    cout<< endl;
    print(head);
}
