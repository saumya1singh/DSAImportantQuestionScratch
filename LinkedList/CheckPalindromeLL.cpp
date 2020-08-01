#include <iostream>
#include <bits/stdc++.h>
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

bool isPalindrome(node *&head){
	node *temp= head;
	stack<int> s;
	//Traverse the complete list and push each element in stack
	while(temp!=NULL){
		s.push(temp->data);
		temp= temp->next;
	}
	//Traverse again, compare with the top element of the stack
	while(head!=NULL){
		int val= s.top();
		s.pop();
		if(val != head->data){
			return false;
		}
		head= head->next;
	}
	return true;
}


int main(){
	int n;
	cin>> n;
	node *head= NULL;
	builtList(head, n);
	if(isPalindrome(head)){
		cout<< "true";
	}else{
		cout<< "false";
	}
	return 0;
}