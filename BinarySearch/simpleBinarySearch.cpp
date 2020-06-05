#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Complexity- O(logn)

int binarySearch(int n, int a[],int m){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid= (s+e)/2;
        
        if(m==a[mid]){
            return mid;
        }else if(m>a[mid]){
            s=mid+1;
        }else if(m<a[mid]){
            e=mid-1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];

    int m;
    cin>>m;
    cout<<binarySearch(n,a,m);
}
