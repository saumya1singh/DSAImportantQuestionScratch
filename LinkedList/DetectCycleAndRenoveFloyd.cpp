#include <iostream>
using namespace std;

class node{
   public:  
  int data;
  node*next;
 node(int d){
      data=d;
      next=NULL;
  }
};
 void insertAtHead(node* &head,int data){
     node*n= new node(data);
     n->next=head;
     head=n;
 }
 
 void insertAtTail(node* &head, int data){
     if(head==NULL){
         head= new node(data);
         return;
     }
     node* temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=new node(data);
     return;
 }
 int length(node*head){
     int len=0;
     while(head!=NULL){
        head=head->next;
        len++;
     }
     return len;
 }

 void insertAtMiddle(node* &head,int data,int p){
     if(head==NULL||p==0){
         insertAtHead(head,data);
     }
     else if(p>length(head)){
         insertAtTail(head,data);
     }
    else{
        int jump=1;
        node*temp=head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        node*n= new node(data);
        n->next=temp->next;
        temp->next=n;
    }

 }

 void buildList(node* &head){
     int data;
     cin>>data;
     while(data!=-1){
         insertAtTail(head,data);
         cin>>data;
     }
     //for creating a loop in the linked list
     head->next->next->next->next->next->next=head->next->next;
 }
 
  void print(node* &head){
     node*temp=head;
     while(temp!=NULL){
         cout<<temp->data<<"-->";
         temp=temp->next;
     }
     cout<<endl;
 }
 
void breakCycle(node* &head,node* &slow,node* &fast){
    
    slow=head;
    //n node is the starting node of the loop
    
    while(slow->next != fast->next){
        fast=fast->next;
        slow=slow->next;        
    }
    fast->next= NULL;
  }


bool detectCycle(node* &head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;
         if(slow==fast){
             breakCycle(head,slow,fast);
             return true;
         }
    }
    return false;
} 

int main() {
   
   node* head=NULL;
   buildList(head);
   
   if(detectCycle(head)){
       cout<<"Cycle was present in the linked list"<<endl;
       cout<<"If we break the cycle, the linked list becomes : "<<endl;
       print(head);
   }
   else{
       cout<<"No cycle was present"<<endl;
   }

   
 return 0;  
}
