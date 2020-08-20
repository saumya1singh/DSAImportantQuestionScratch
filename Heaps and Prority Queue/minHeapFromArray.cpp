#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Heapd from array can be constructed in O(n) and O(nlogn) time as well
//Here is the implementation of heaps using arrays/vectors in O(n) by Bottom Up Approach

void heapify(vector<int> &v, int idx){
    int left= idx*2;
    int right= left+1;
    int minidx= idx;
    int last= v.size()-1;

    if(left<=last && v[left]<v[idx]){
        minidx= left;
    }
    if(right<=last && v[right]<v[minidx]){
        minidx= right;
    }
    if(minidx!=idx){
        swap(v[idx], v[minidx]);
        heapify(v, minidx);
    }
}

void buildHeap(vector<int> &v){
    int leaf_node= (v.size()-1)/2;

    for(int i= leaf_node; i>=1; i--){
        heapify(v, i);
    }
}

void print(vector<int> v){
    for(int x:v){
        cout<< x<< " ";
    }
}

int main() {
    vector<int> v= {-1, 2, 5, 1, 8, 0, 10, 9, 4};
    buildHeap(v);
    print(v);
}
