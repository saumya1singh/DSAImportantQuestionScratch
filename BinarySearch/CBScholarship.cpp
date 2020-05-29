#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Solution of CB Scholarship Problem on HackerRank by Saumya Singh

bool isPossible(int n,int m,int x,int y,int mid){

    int totalCouponNeeded=mid*x;
    int couponFromWeakStudent=(n-mid)*y;
    if(totalCouponNeeded<=m+couponFromWeakStudent){
        return true;
    }else{
        return false;
    }

}

int maxStudent(int n,int m,int x,int y){

    int s=0,e=n;
    int mid;
    int ans=INT_MIN;

    while(s<=e){
        mid=(s+e)/2;
        //check if mid can be the possible answer? Can we give scholarships to mid students
        if(isPossible(n,m,x,y,mid)){
            s=mid+1;
            ans=max(ans,mid);
        }else{
            e=mid-1;
        }
    }
    
    return ans;
}

int main() {

    int n,m,x,y;
    cin>>n>>m>>x>>y;

    cout<<maxStudent(n,m,x,y)<<endl;
}
