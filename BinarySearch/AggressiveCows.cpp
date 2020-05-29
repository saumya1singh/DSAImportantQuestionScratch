#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Aggressive Cows Problem by Saumya Singh on SPOJ
//Return the maximized min distance

bool isPossible(int n,int c,int a[],int mid){
    int last_cow=a[0];
    int count=1;

    for(int i=1;i<n;++i){
        if(a[i]-last_cow>=mid){
            last_cow=a[i];
            count++;

            if(count==c)
            return true;
        }
    }
    return false;
}

int maximizedMinDistance(int n, int c, int a[]){

    int s=0;
    int e=a[n-1]-a[0];
    int ans=INT_MIN;

    while(s<=e){
        int mid=(s+e)/2;

        //check if is possible to have mid as the possible maximized min distance
        if(isPossible(n,c,a,mid)){
            s=mid+1;
            ans=max(ans,mid);
        }else{
            e=mid-1;
        }
    }
    return ans;
}


int main() {
    int tc;
    cin>>tc;

    while(tc--){
    int n;
    cin>>n;
    int c;
    cin>>c;

    int a[100000];
    for(int i=0;i<n;++i)
    cin>>a[i];

    sort(a,a+n);

    cout<<maximizedMinDistance(n,c,a)<<endl;
    }

}
