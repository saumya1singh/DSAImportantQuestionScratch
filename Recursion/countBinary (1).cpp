#include <iostream>
using namespace std;

//Count Binary Strings of lenght n 
//Condition- That string shouldn't contain consecutive 1s
//Recursive Problem

//if lenght is 2 then possible binary strings are 00, 01, 10 i.e return 3

int countBinary(int n){
    //base
    if(n==1){
        return 2;
    }
    if(n==0){
        return 1;
    }

    //recursive
    int ans= countBinary(n-1) + countBinary(n-2);
    return ans;
}

int main() {
    //lenght of binary string
    int n;
    cin>>n;

    cout<< countBinary(n);
}
