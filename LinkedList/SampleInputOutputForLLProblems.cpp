#include <iostream>
using namespace std;

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


void builtList(node*&head, int n){
    int data;

    while(n--){
		cin>> data;
        insertAtTail(head, data);        
    }
}


void print(node*head){
    while(head!=NULL){
        cout<< head->data<<"->";
        head= head->next;
    }
    cout<< endl;
}

int main(){
	int n;
	cin>> n;
	node *head= NULL;
	builtList(head, n);
	print(head);
	return 0;
}