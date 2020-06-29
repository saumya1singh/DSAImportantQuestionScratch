#include <iostream>
using namespace std;

// Quick Sort algrothim recursive way 
// Find pivot, divide in two parts and sort each part recursively
int partition(int a[], int s, int e){
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for( ;j<=e-1; ){
        if(a[j]<=pivot){
            i=i+1;
            swap(a[i],a[j]);
        }
        j=j+1;
    }
    //put the pivot at vcorrect position
    swap(a[i+1],a[e]);
    return i+1;
}

void quickSort(int a[], int s, int e){
    //base 
    if(s>=e){
        return;
    }
    //Find pivot elemnts' correct position
    int pivot= partition(a,s,e);
    //sort left half
    quickSort(a,s,pivot-1);
    //sort right half
    quickSort(a,pivot+1,e);
}

int main() {
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>> a[i];
    }
    quickSort(a,0,n-1);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }  
}
