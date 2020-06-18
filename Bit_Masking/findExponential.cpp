#include <iostream>
using namespace std;

//Given a and n, find a^n 
//example a=3, n=5 find 3^5

int findExponent(int a, int n){

    int ans=1;
    while(n>0){
        int last_bit= (n&1);
        if(last_bit){
            ans=ans*a;
        }
        n=n>>1;
        a=a*a;
    }
    return ans;
}

int main() {
    int a;
    cin>>a;
    int n;
    cin>>n;

    cout<<findExponent(a,n);
   
}
