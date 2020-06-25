#include <iostream>
using namespace std;

//bubbleSort in Recursive Way

void bubbleRecursive(int a[], int size, int j){
    //base
    if(size==1){
        return;
    }
    if(j==size-1){
       //one pass completed
       return bubbleRecursive(a,size-1,0); 
    }
    //recursive
    bubbleRecursive(a,size,j+1);
    return;
}

void bubbleSort(int a[], int size){
    //base
    if(size==1){
        return;
    }
    //recursive
    for(int j=0; j<size-1; j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubbleSort(a, size-1);
}


int main() {
    int a[]= {5,4,3,1};
    int size= sizeof(a)/sizeof(int);
    bubbleSort(a, size);
    for(int i=0; i<size; ++i){
        cout<< a[i]<<" ";
    }
    cout<< endl;
    bubbleRecursive(a, size, 0);
    for(int i=0; i<size; ++i){
        cout<< a[i]<<" ";
    }
}
