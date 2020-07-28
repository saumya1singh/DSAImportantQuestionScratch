#include <iostream>
#include<stack>
using namespace std;

//List STL
//push()  pop()  empty()   size()  top()

int main() {
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    cout<< s.size()<< endl;

    while(!s.empty()){
        cout<< s.top()<< " ";
        s.pop();
    }

    cout<< endl;   
    cout<< s.size()<< endl;
}
