#include <iostream>
#include<stack>
using namespace std;

// Balanced Parenthesis Stacks 
// Check if given expression is valid or not based on num of brackets
// ( (a+b) - (c*d) ) : valid
// ) (a+b) - (c*d)) ) : Invalid

bool isValid(char *ch){
    stack<char> stk;

    for(int i=0; ch[i]!='\0'; ++i){
        char c= ch[i];
        if(c=='('){
            stk.push(c);
        }else if(c==')'){
            if(stk.empty() || stk.top()!='(')
            return false;
            stk.pop();
        }
    }
    return stk.empty();
}

int main() {
    char ch[100];
    cin>> ch;
    if(isValid(ch)){
        cout<<"True: Valid Expression";
    }else{
        cout<<"False: InValid Expression";
    }
}
