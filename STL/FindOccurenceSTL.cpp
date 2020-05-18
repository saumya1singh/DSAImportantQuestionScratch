#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    int arr[]={2,7,9,9,9,9,10};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    auto result=binary_search(arr, arr+n, key);
    if(result){
        cout<<"Element Present"<<endl;
    }else{
        cout<<"Element Absent";
    }

    if(result){

        auto lb= lower_bound(arr,arr+n,key);
        auto ub= upper_bound(arr,arr+n,key);

        int occurence=ub-lb;
        cout<<"Occurence of "<<key<<" is "<<occurence;
    }
}
