#include <iostream>

using namespace std;

//Find Pivot in sorted rotated array

void approach1(int n, int a[]){
     for(int i=0;i<n;++i){
        if(a[i]> a[i-1] && a[i]>a[i+1]){
            cout << "Approach 1- "<< i <<endl;
        }
   }
}


void approach2(int n, int a[], int s, int e){
    int mid;

    while(s<=e){
        mid=(s+e)/2;

        //mid is Pivot if is greater than right next
        if(a[mid]>a[mid+1]  && mid<e)
        cout << "Approach 2- "<< mid;

        //mid-1 will be Pivot if mid< mid-1
        if(a[mid]<a[mid-1] && mid>s)
        cout<<"Approach 2- "<< mid-1;

        //if left half unsorted, it means Pivot is in left half
        if(a[s]>a[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }

    approach1(n,a);
    int s=0;
    int e=n-1;
    approach2(n,a,s,e);
   
}
