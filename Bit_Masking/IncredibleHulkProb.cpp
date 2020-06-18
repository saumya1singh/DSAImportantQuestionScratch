#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Incredible Hulk Problem
//Lin- https://hack.codingblocks.com/app/practice/5/1038/problem

int countMinJumps(int n){
    int count=0;

    while(n>0){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main() {
    int tc;
    cin>>tc;

    while(tc--){
        int num;
        cin>>num;

        cout<<countMinJumps(num)<<endl;
    }
}
