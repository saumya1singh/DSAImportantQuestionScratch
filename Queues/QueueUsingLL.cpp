#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    public:
    node(int d){
        data= d;
        next= NULL;
    }    
};


class Queue{
    node *front, *rear;

    public:
    Queue(int ds=6){
        front= rear= NULL;
    }

    //enqueue()
    void push(int data){
    node *newNode= new node(data);
        if(rear==NULL){
            front= rear= newNode;
            return;
        }

        //Add the new element at end of the queue
        rear-> next= newNode;
        rear= newNode;
        return;
    }   


    //deque()
    void pop(){

        if(front==NULL){
            return;
        }
        //Pop from front
        node *temp= front;
        front= front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete temp;
        return;
    }

    void print(){
        while(front!=NULL){
            cout<< front->data<<" ";
            front= front->next;
        }
    }

};

int main() {
    Queue q;
    for(int i=1; i<=5; ++i){
        q.push(i);
    }

    q.pop();
    q.print();
}
