#include <iostream>
#include <stack>
using namespace std;

//Reverse Stack Recursively
void insertAtBottom(stack<int>&s, int data){
    if(s.empty()){
        s.push(data);
        return;
    }

    int x= s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(x);
}

void reverseStackRevursively(stack<int>&s){
    if(s.empty()){
        return;
    }
    int x= s.top();
    s.pop();
    reverseStackRevursively(s);
    insertAtBottom(s, x);
}


int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStackRevursively(s);

    cout<< "Revrsed Stack Is: ";
    while(!s.empty()){
        cout<< s.top()<<" ";
        s.pop();
    }

}
