#include <iostream>
using namespace std;

//Circular LL
//Deletion in Circular LL

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
    cout<<temp->data<<"->"<< "END";
}


node* getNode(node *&head, int data){
    node *temp= head;
    while(temp->next!=head){
        if(temp->data==data){
            return temp;
        }
        temp= temp->next;
    }
    if(temp->data==data){
        return temp;
    }else{
        return NULL;
    }
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



void deleteNode(node *&head, int data){
    node *del= getNode(head, data);

    if(del==NULL){
        cout<<"Node not present, Deletion not possible!"<<endl;
        return;
    }
    if(head==del){
        head= head->next;
    }
    node* temp= head;
    while(temp->next!=del){
        temp= temp->next;
    }
    temp->next= del->next;
    delete del;
}



int main() {
    node* head= NULL;
    insertAtHead(head, 5);    
    insertAtHead(head, 4);    
    insertAtHead(head, 3);        
    insertAtHead(head, 2);        
    insertAtHead(head, 1);
    print(head);
    cout<< endl;
    deleteNode(head, 90);
    print(head);
}
