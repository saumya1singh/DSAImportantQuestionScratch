#include <iostream>
using namespace std;

//Finding all subArrays of a given array
//For an array of lenght n, total subarray= n*(n+1)/2
//Complexity- O(n^2)

void findAllSubArrays(int a[100], int size, int s, int e){
    //Base condition
    if(e==size){
        return;
    }

    else if(s>e){
        findAllSubArrays(a,size,0,e+1);
    }

    else{
    for(int i=s; i<=e; ++i){
        cout<< a[i]<<" ";
    }
    cout<<endl;
    findAllSubArrays(a,size,s+1,e);
    }
}

int main() {
    int size;
    cin>> size;

    int a[100];
    for(int i=0; i<size; ++i){
        cin>> a[i];
    }

    findAllSubArrays(a, size, 0, 0);
    return 0;
}
