#include <iostream>
using namespace std;

//LinkedList Insert At Middle

class node{
    public:
    int data;
    node*next;

    node(int d){
        data= d;
        next= NULL;
    }
};


//Head
void insertAtHead(node*&head, int data){
    //if null
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


int len(node*head){
    int len=0;
    while(head!=NULL){
        head= head->next;
        len++;
    }
    return len;
}


void insertAtTail(node*&head, int data){
    node*temp= head;
    while(temp->next!=NULL){
        temp= temp->next;        
    }
    temp->next= new node(data);
}



//Middle
void insertAtMiddle(node*&head, int p, int data){
    //if Null List
    if(head==NULL){
        insertAtHead(head, data);
    }
    else if(p>len(head)){
        insertAtTail(head, data);
    }else{
        //Middle
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




void print(node*head){
    while(head!=NULL){
        cout<< head->data<<"-->";
        head= head->next;
    }
     cout<< endl;
}



int main() {
    node*head= NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtTail(head, 9);
    insertAtMiddle(head, 1, 8);
    insertAtTail(head, 10);

    print(head);
}
