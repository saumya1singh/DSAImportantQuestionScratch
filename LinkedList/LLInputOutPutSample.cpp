#include<iostream>
using namespace std;
int count=1;


class node{
	public:
	int data;
	node* next;

	node(int d){
		data= d;
		next= NULL;
	}
};



void insertAtTail(node* &head, int data){
	node* newNode= new node(data);
	if(head==NULL){
		head= newNode;
		newNode->next= NULL;
		return;
	}
	node* temp= head;
	while(temp->next!=NULL){
		temp= temp->next;
	}
	temp->next= newNode;
	newNode->next= NULL;
    return;
}



void builtList(node* &head, int n){
	int data;
	cin>> data;

	while(count<=n){
		count++;
		insertAtTail(head, data);
		cin>> data;
	}
    return;
}



void printList(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<< temp->data<< "-->";
        temp= temp->next;
    }
    cout<< endl;
}


int main() {
	node* head= NULL;
	int n;
	cin>> n;
	builtList(head, n);
    printList(head);
	return 0;
}