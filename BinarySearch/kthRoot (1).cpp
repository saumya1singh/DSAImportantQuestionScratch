#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Finf kth Root

bool isAnswer(long long n,long long k,long long mid){
    if(pow(mid,k)<=n){
        return true;
    }
    return false;
}

int  main() {

    int testcases;
    cin>>testcases;

    while(testcases){
        long long n;
        cin>>n;
        long long k;
        cin>>k;

        long long s=1;
        long long e=n;
        long long ans=0;

        while(s<=e){
            long long mid=(s+e)/2;
            if(isAnswer(n,k,mid)){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        cout<<ans<<endl;
        --testcases;
    }
}
