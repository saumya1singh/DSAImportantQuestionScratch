#include <iostream>
using namespace std;

//Use recursion to multiply a and b without *
// a*b

int multiply(int a, int b){
    if(b==1){
        return a;
    }
    return a+multiply(a,b-1);
}
int main() {
    int a, b;
    cin>> a>> b;

    cout<< multiply(a,b);
}
