#include <iostream>
using namespace std;

//Implementation of Queue using Arrays

class Queue{
    int *arr; 
    int cs, ms, f, r;
    public:
    Queue(int ds=6){
        arr= new int[ds];
        cs=0;
        ms= ds;
        f= 0;
        r= ds-1;
    }

    bool empty(){
        return cs==0;
    }

    bool full(){
        return cs==ms;
    }

    void push(int data){
        if(!full()){
        r= (r+1)%ms;
        arr[r]= data;
        cs++;
        }
    }

    void pop(){
        if(!empty()){
        f= (f+1)%ms;
        cs--;
        }
    }

    int front(){
        return arr[f];
    }

    ~Queue(){
        if(arr!=NULL){
            delete[] arr;
            arr= NULL;
        }
    }
};

int main() {
    Queue q;

    for(int i=1; i<=5; ++i){
        q.push(i);
    }

    while(!q.empty()){
        cout<< q.front()<<" ";
        q.pop();
    }
}
