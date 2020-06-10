#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int n, int c, int a[], int mid){
    int lastcow=a[0];
    int count=1;
    for(int i=0;i<n;++i){
        if(a[i]-lastcow>=mid){
            lastcow=a[i];
            count++;

            if(count==c){
                return true;
            }
        }
    }
    return false;
}

int LargestMinDistance(int n, int c, int a[]){
    int s=0;
    int e=a[n-1]-a[0];
    int ans=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(isPossible(n,c,a,mid)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int main() {
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<LargestMinDistance(n,c,a);
}
