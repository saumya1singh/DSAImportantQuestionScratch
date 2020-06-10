#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Find upper and lower bound of a num in sorted array- Approach is Binary Search
//Author- Saumya Singh

int firstOccurence(int n,int a[],int x){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(x==a[mid]){
            ans=mid;
            e=mid-1;
        }else if(x>a[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int lastOccurence(int n,int a[],int x){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(x==a[mid]){
            ans=mid;
            s=mid+1;
        }else if(x>a[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];

    int t;
    cin>>t;
 
    for(int i=0;i<t;++i){
        int x;
        cin>>x;
        cout<<firstOccurence(n,a,x)<<" "<<lastOccurence(n,a,x)<<endl;
    }
    
}
