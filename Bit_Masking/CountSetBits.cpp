#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Given a number, find no. of set bits(1) in it's binary representation
//e.g N=7=111, output=3


int FasterCountSetBits(int n){
//Complexity- O(no. of set bits)
//everytime last set bit is removed 
    int ans=0;

    while(n){
        n=n&(n-1);
        ans++;
    }
    return ans;

}

int CountSetBits(int n){
    
    int count=0;

    while(n){
        if(n&1){
            count++;
        }
        n=n>>1;
    }

    return count;
}

int main() {
    int n;
    cin>>n;

    cout<<"Approach 1: "<<CountSetBits(n)<<endl;
    cout<<"Approach 2: "<<FasterCountSetBits(n)<<endl;
    cout<<"Approach 3: "<< __builtin_popcount(n);
   
}


