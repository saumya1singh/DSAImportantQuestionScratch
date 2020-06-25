#include <iostream>
using namespace std;

//Find exponent using Recursion e.g 2^5 (a^n)
int power(int a, int n){

    if(n==1){
        return a;
    }
    return a*power(a, n-1);
}

int main() {
    int a, n;
    cin>> a>> n;

    cout<<power(a, n);
}
