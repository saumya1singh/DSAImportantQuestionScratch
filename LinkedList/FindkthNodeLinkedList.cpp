#include <iostream>
using namespace std;

//Find kth node from end

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

int len(node*head){
    int l=0;
    while(head!=NULL){
        head= head->next;
        l++;
    }
    return l;
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

node* findKth(node*head, int k){
    if(k>len(head)){
        cout<< "Not Possible  ";
        head->data= 0;
        head->next=NULL;
        return head;
    }
    
    node* s=head;
    node* f=head;

    int j=1;
    while(j<=k){
        f= f->next;
        j++;
    }

    while(f!=NULL){
        f= f->next;
        s= s->next;
    }
    return s;
}


int main() {
    node*head= NULL;

    cin>> head;
    cout<< head;
    cout<< "Length  "<< len(head)<< endl;
    int k= 5;
    node*kth= findKth(head, k);
    cout<< kth->data;
}
