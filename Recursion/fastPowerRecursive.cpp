#include <iostream>
using namespace std;

//Calculate exponents or powers fastly 
//a^n? or 2^5?

int fast_power(int a, int n){
    //base case
    if(n==1){
        return a;
    }
    //recursive
    int smaller_ans= fast_power(a, n/2);
    smaller_ans*= smaller_ans;
    if(n&1){
        return a*smaller_ans;
    }
    return smaller_ans;
}

int main() {
    int a,n;
    cin>>a>>n;

    cout<< fast_power(a,n);
}
