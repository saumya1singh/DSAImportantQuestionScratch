#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int a=10;
    int b=20;

    swap(a,b);
    max(a,b);
    min(a,b);


    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    //swap(arr[1],arr[3]);

      for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

    //Reverse array
    reverse(arr,arr+n);
    cout<<endl;
     for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

}
