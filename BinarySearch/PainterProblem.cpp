#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Painter Problem on hackerBlock/SPOJ by Saumya Singh
//Find min time to paint all the boards(conditions given)

bool isPossible(int p,int b,int a[], int mid){

    int painterNum=1;
    int sum=0;

    for(int i=0;i<b;++i){
        sum+=a[i];
        if(sum<=mid){
            painterNum++;
            sum=a[i];
        }
    }
    if(painterNum<=p){
        return true;
    }else{
        return false;
    }
}

int minTime(int p,int b,int a[]){
    int maximum=INT_MIN,sum=0;
    int ans=INT_MAX;

    for(int i=0;i<b;++i){
        maximum=max(maximum,a[i]);
        sum+=a[i];
    }

    int s=maximum;
    int e=sum;
    int mid;

    while(s<=e){
        mid=(s+e)/2;
        //check if mid can be the correct answer using isPossible Method
        if(isPossible(p,b,a,mid)){
            e=mid-1;
            ans=min(ans,mid);
        }else{
            s=mid+1;
        }
    }
    return ans;
}

int main() {
    int p;
    cin>>p;
    int b;
    cin>>b;
    int a[100000];
    for(int i=0;i<b;++i){
        cin>>a[i];
    }
    cout<<minTime(p,b,a);
    cout<<endl;
}
