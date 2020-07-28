#include<iostream>
using namespace std;

// 7
// 1 2 2 1 8 5 6
// 3


// 8 5 6 1 2 2 1

//Append Last k elements 

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
	while(n--){        
	    cin>> data;
		insertAtTail(head, data);		
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


node* append(node* &head, int n, int k){
	k= k%n;
    if(k==n){
        return head;
    }
	int count= (n-1)-k;
	int i=0;
	node* prev= head;
	node* current= head;
	while(i<=count){
        prev= current;
		current= current->next;
		i++;
	}
    prev->next= NULL;
	int len= 1;
    node* temp= current;
	while(temp->next!=NULL){
        temp= temp->next;
        len++;
    }
    temp->next= head;
	return current;
}


int main() {
	node* head= NULL;
	int n;
	cin>> n;
	builtList(head, n);
	int k;
	cin>> k;
	node* ans= append(head, n, k);
    printList(ans);
	return 0;
}