#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Painter Problem on hackerBlock by Saumya Singh
//Find min time to paint all the boards(conditions given)

bool isPossible(long long p,long long b,long long a[], long long mid){

    long long paintNum=1;
    long long sum=0;

    for(long long i=0;i<b;++i){
        sum+=a[i];
        if(sum>mid){
            paintNum++;
            if(paintNum>p)return false;
            sum=a[i];
        }
    }
    return true;
}

long long minTime(long long p,long long b,long long a[]){
    long long maximum=INT_MIN,sum=0;
    long long ans=INT_MAX;

    for(long long i=0;i<b;++i){
        maximum=max(maximum,a[i]);
        sum+=a[i];
    }

    long long s=maximum;
    long long e=sum;
    long long mid;

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
    long long p;
    cin>>p;
    long long b;
    cin>>b;
    long long a[100000];
    for(long long i=0;i<b;++i){
        cin>>a[i];
    }
    cout<<minTime(p,b,a);
    cout<<endl;
}
