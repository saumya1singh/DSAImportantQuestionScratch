#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    int arr[]={10,20,45,100};
    int n;
    n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    auto it=find(arr,arr+n,key);
    int index=it-arr;

    if(index==n){
        cout<<"Element not found";
    }else{
        cout<<"Element found at "<<index;
    }

}
