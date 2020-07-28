#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Kth element from last 

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



void builtList(node* &head){
	int data;
	cin>> data;
	while(data!=-1){    
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


node* KthFromLast(node *head, int k){
    node *mainHead= head;
    node *reference= head;
    int count=1;
    while(count<=k){
        reference= reference->next;
        count++;
    }
    while(reference!=NULL){
        mainHead= mainHead->next;
        reference= reference->next;
    }
    return mainHead;
}


int main() {
	node* head= NULL;	
	builtList(head);
    int k;
	cin>> k;
    node* ans= KthFromLast(head, k);
    int element= ans->data;
    cout<< element;
	return 0;
}