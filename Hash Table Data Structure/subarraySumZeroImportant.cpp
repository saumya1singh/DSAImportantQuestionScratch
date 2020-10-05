#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Subarray with sum Zero
//Given an array find if there exists a subarray with sum 0

//Pre compute sum, cumulative sum
bool sumZero(int a[], int n){
    int preSum= 0;
    unordered_set<int> s;

    for(int i=0; i<n; ++i){
        preSum+= a[i];
        if(preSum==0 || s.find(preSum) != s.end()){
            return true;
        }
        s.insert(preSum);
    }
    return false;
}

int main() {
    int n;
    cin>> n;
    //a= [1, 2, -3, 5, -5]
    int a[n];
    for(int i=0; i<n; ++i){
        cin>> a[i];
    }

    if(sumZero(a, n)){
        cout<< "Subarray Present!";
    }else{
        cout<< "Subarray Not Present!";
    }
}
