#include <iostream>
#include <stack>
using namespace std;

//Implement Queue Using Two Stacks

class Queue{
    stack<int> s1, s2;
    public:
    void push(int x){
        s1.push(x);
    }

    void pop(){
        if(s1.empty() && s2.empty()){
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        //Remove the element at top
        int element= s2.top();
        s2.pop();
    }

    int size(){
        return s1.size()+s2.size();
    }
    bool empty(){
        return size()==0;
    }
    int front(){
        if(s1.empty() && s2.empty()){
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        //Catch the element at top
        int ans= s2.top();
        return ans;
    }
};


int main() {
    Queue q;
    q.push(1);   
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();

    while(!q.empty()){
        cout<< q.front()<<" ";
        q.pop();
    }
}
