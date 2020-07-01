#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Counting sort algorithm
//Complexity- O(n+range) : it is very useful when ranfe is small i.e largest-smallest is a small number

void counting_sort(int arr[], int n){
    //Find largest
    int largest= INT_MIN;
    for(int i=0;i<n;++i){
        largest= max(arr[i], largest);
    }

    int freq[largest+1]= {0};
    //work in freq array
    for(int i=0;i<n;++i){
        freq[arr[i]]++;
    }
    //update arr[i]
    int j=0;
    for(int i=0;i<=largest;++i){

        while(freq[i]--){
            arr[j]= i;
            j++;
        }
    }
}

int main() {
    int n;
    cin>> n;

    int arr[n];

    for(int i=0; i<n; ++i){
        cin>> arr[i];
    }

    counting_sort(arr, n);

    for(int i=0; i<n; ++i){
        cout<< arr[i]<<" ";
    }
}
