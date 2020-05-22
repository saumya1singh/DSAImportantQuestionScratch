#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//SquareRoot using Binary Search(In iNtegers)


int squareRoot(int n){

    int s=0;
    int e=n;
    int ans;

    while(s<=e){
        int mid=(s+e)/2;

        if(mid*mid==n){
            return mid;
        }else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }else if(mid*mid>n){
            e=mid-1;
        }
    }
    return ans;

}
int main() {

    int n;
    cin>>n;
    cout<<squareRoot(n);
}
