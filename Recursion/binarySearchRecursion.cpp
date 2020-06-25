#include <iostream>
using namespace std;

//Binary Search using Recursion

int binarySearch(int a[], int s, int e, int key){

    int mid= (s+e)/2;

    if(a[mid]==key){
        return mid;
    }
    if(a[mid]>key){
        return binarySearch(a,0,mid-1,key);
    }
    if(a[mid]<key){
        return binarySearch(a,mid+1,e,key);
    }
    return -1;
}

int main() {
    int a[]= {1,2,3,4,5,10,20};
    int size= sizeof(a)/sizeof(int);

    cout<< binarySearch(a, 0, size-1, 10);
}
