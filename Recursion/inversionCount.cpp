#include <iostream>
using namespace std;

//Inversion Count Problem
//Given an array find total number of pairs such that a[i]>a[j] and i<j
//e.g In {1,5,2,6,3,0} we have 8 such pairs 

int merge(int a[], int s, int e){
    int mid= (s+e)/2;
    int i=s;
    int j= mid+1;
    int k= s;
    int temp[10000];
    int cnt=0;

    while(i<=mid and j<=e){
        if(a[i]<=a[j]){
            temp[k]= a[i];
            k++;
            i++;
        }else{
            temp[k++]= a[j++];
            cnt += mid-i+1;
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    //copy all elements of temp into a
    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }
    return cnt;
}

int inversionCount(int a[], int s, int e){
    //base
    if(s>=e){
        return 0;
    }
    //recursive
    int mid= (s+e)/2;
    int x= inversionCount(a,s,mid);
    int y= inversionCount(a,mid+1,e);
    int z= merge(a,s,e);

    return x+y+z;
}

int main() {
    int a[]= {1,5,2,6,3,0};
    int size= sizeof(a)/sizeof(int);
    cout<< inversionCount(a,0,size-1);
}
