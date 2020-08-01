#include <iostream>
#include<list>
using namespace std;

//Implement Queue using List STL

class Queue{
    list<int> l;
    int cs;

    public:
    Queue(){
        cs= 0;
    }

    void push(int x){
        l.push_back(x);
        cs++;
    }

    bool empty(){
        return cs==0;
    }

    void pop(){
        if(!empty()){
        cs--;    
        l.pop_front();
        }
    }

    int front(){
        return l.front();
    }

};


int main() {
    Queue q;
    for(int i=1; i<=5; ++i){
        q.push(i);
    }

    while(!q.empty()){
        cout<< q.front()<< " ";
        q.pop();
    }
}
