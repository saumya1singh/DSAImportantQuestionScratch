#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Reverse stack using another stack
void transfer(stack<int> &s1, stack<int> &s2, int n){

    for(int i=0; i<n; ++i){
        s2.push(s1.top());
        s1.pop();
    }
}


void reverse(stack<int> &s1){
    //Helper Stack
    stack<int> s2;
    int n= s1.size();

    for(int i=0; i<n; ++i){
        //Store element x
        int x= s1.top();
        s1.pop();

        //shift from s1 to s2
        transfer(s1, s2, n-i-1);

        //push x in s1
        s1.push(x);

        //shift from s2 to s1
        transfer(s2, s1, n-i-1);
    }
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverse(s);
    
    while(!s.empty()){
        cout<< s.top()<< " ";
        s.pop();
    }


}
