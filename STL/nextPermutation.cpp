#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[]={10,20,30,80,90};
    int n=sizeof(arr)/sizeof(int);

    //Rearranging the array elements
    next_permutation(arr,arr+n);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }


    //Working with Vectors and next_permutation
    vector<int> v{1,2,3,9,6};

    //Rearranging vector Elements
    next_permutation(v.begin(), v.end());
    cout<<endl;
    for(int i=0;i<v.size();++i){
        
        cout<<v[i]<<" ";
    }
    
    }
