#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//EKO Problem Solution on SPOJ by Saumya Singh
//Find Maximum height of SawBlade
//Ques-https://www.spoj.com/problems/EKO/

bool isPossible(int n,int m,int a[],int mid){
    int sum=0;
    for(int i=0;i<n;++i){
        if(a[i]-mid>0){
            sum=sum+(a[i]-mid);
            if(sum>=m)
            return true;
        }       
    }
    return false;
}

int maxSawBladeHeight(int n,int m,int a[]){
    //Decide the search space for the Sawblade Height, it's very important
    int s=0;
    int e=a[n-1];
    int mid;
    int ans=INT_MIN;
    while(s<=e){
        mid=(s+e)/2;
        //Is it possible to have mid as the possible answer?
        if(isPossible(n,m,a,mid)){
            s=mid+1;
            ans=max(ans,mid);
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int main() {

    int n;
    cin>>n;
    int m;
    cin>>m;

    int a[10000];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<maxSawBladeHeight(n,m,a)<<endl;
}
