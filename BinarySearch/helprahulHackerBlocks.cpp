#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Help Rahul Problem Hacker Blocks, find key index from sorted rotated array

int findindex(int a[],int n,int key){

    int s=0;
    int e=n-1;

    while(s<=e){

        int mid=(s+e)/2;

        if(a[mid]==key){
            return mid;
        }
        //check if first part of array-graph is     
        else if(a[s]<=a[mid]){
            //Two Cases
            if(key>=a[s] and key<=a[s]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        //check second part of array-graph is sorted 
        else if(a[e]>a[mid]){
            //Two cases
            if(key>=a[mid] & key<=a[e]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
    }
    return -1;
}

int main() {

    int a[]={4,5,1,2,3};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;

    cout<<findindex(a,n,key)<<endl;

}
