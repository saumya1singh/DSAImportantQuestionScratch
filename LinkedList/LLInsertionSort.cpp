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
        cout<< head->data<<" ";
        head= head->next;
    }
    cout<< endl;
}

node* sortList(node *&head, node *&newNode){

	//if the newNode value is smaller than already exising values
	if(head==NULL || head->data >= newNode->data){
		newNode->next= head;
		head= newNode;
		return newNode;
	}
	node *current= head;
	while(current->next!=NULL && current->next->data < newNode->data){
		current= current->next;
	}
	newNode->next= current->next;
	current->next= newNode;
	return head;	
}



node* insertionSorting(node *head){
	node *sorted= NULL;
	node *current= head;
	while(current!=NULL){
		node *current1= current->next;
		sorted= sortList(sorted, current);
		current= current1;
	}
	return sorted;
}


int main(){
	int n;
	cin>> n;
	node *head= NULL;
	builtList(head, n);
	head= insertionSorting(head);
	print(head);
	return 0;
}