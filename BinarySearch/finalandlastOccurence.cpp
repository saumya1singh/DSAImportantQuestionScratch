#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//First and Last Occurrence of an element in a sorted array.

int firstOccurence(int a[],int n,int key){

    int s=0;
    int e=n-1;
    int ans;

    while(s<=e){

        int mid=(s+e)/2;

        if(a[mid]==key){
            ans=mid;
            e=mid-1;
        }else if(a[mid]<key){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int lastOccurence(int a[],int n,int key){

    int s=0;
    int e=n-1;
    int ans;

    while(s<=e){

        int mid=(s+e)/2;
        if(a[mid]==key){
            ans=mid;
            s=mid+1;
        }else if(a[mid]<key){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}



int main() {
    int a[]={1,2,3,5,8,8,8,8,8,9};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;

    cout<<firstOccurence(a,n,key)<<endl;
    cout<<lastOccurence(a,n,key)<<endl;


}
