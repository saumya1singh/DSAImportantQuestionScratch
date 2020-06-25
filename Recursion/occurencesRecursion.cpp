#include <iostream>
using namespace std;

//Finding Occurences using Recursion
//First occurence of a number in an array 
//Last occurence of a number ij a n array
//All occurences of given number in an array

int storedOccur(int a[], int size, int key, int out[],int i, int j){
    //base
    if(i==size){
        return j;
    }
    //recursive
    if(a[i]==key){
        out[j]=i;
        return storedOccur(a,size,key,out,i+1,j+1);
    }
    return storedOccur(a,size,key,out,i+1,j);   
}

void allOccur(int a[], int size, int i, int key){
    //base
    if(i==size){
        return;
    }
    //recursive
    if(a[i]==key){
        cout<<i<<" ";
    }
    return allOccur(a,size,i+1,key);
}

int lastOccur(int a[], int size, int key){
    //base
    if(size==0){
        return -1;
    }
    //recursive
    int i= lastOccur(a+1,size-1,key);
    if(i==-1){
        if(a[0]==key){
            return 0;
        }else{
            return -1;
        }
    }
    return i+1;
}


int main() {
    int a[]={1,2,7,3,7,5};
    int key= 7;
    int size= sizeof(a)/sizeof(int);

    cout<< "Last Occurence "<< lastOccur(a,size,key)<<endl;
    cout<< "All Occurences ";
    allOccur(a,size,0,key);
    cout<<endl;
    int out[100];
    cout<< "All Occur ";
    int count= storedOccur(a,size,key,out,0,0);
    for(int i=0;i<count;++i){
        cout<<out[i]<<" ";
    }
}
