#include <iostream>
using namespace std;

//Merge Two Sorted LinkedList
//Contributor: Saumya Singh


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

node* merge(node* a, node* b){
    
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }

    node* c;
    //Comparison
    if(a->data < b->data){
        c= a;
        c->next= merge(a->next, b);
    }else{
        c= b;
        c->next= merge(a, b->next);
    }
    return c;
}

int main() {
    node*head1= NULL;
    node*head2= NULL;

    cin>> head1;
    cin>> head2;
    cout<< head1;
    cout<< endl;
    cout<< head2;
    cout<< endl;
    node* mergedList= merge(head1, head2);
    cout<< mergedList;

}
