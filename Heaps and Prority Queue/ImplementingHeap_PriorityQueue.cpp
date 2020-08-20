#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Implementing Heaps uisng vectors
//Push, Pop, Top
class Heaps{
    vector<int> v;
    bool minHeap;
    bool compare(int a, int b){
        if(minHeap){
            return a<b;
        }else{
            return a>b;
        }
    }

    public:
    Heaps(int defaultSize=10, bool type= true){
        v.reserve(defaultSize);
        v.push_back(-1);
        minHeap= type;
    }

    void push(int d){
        v.push_back(d);
        int idx= v.size()-1;
        int parent= idx/2;
        while(idx>1 and compare(v[idx], v[parent])){
            //swap and update
            swap(v[idx], v[parent]);
            idx= parent;
            parent= parent/2;
        }
    }

    void heapify(int idx){
        int left= idx*2;
        int right= left+1;
        int last= v.size()-1;
        int minidx= idx;
        if(left<=last and compare(v[left], v[idx])){
            minidx= left;
        }
        if(right<=last and compare(v[right], v[minidx])){
            minidx= right;
        }
        if(minidx!=idx){
            swap(v[minidx], v[idx]);
            heapify(minidx);
        }
    }


    void pop(){
        int size= v.size()-1;
        swap(v[1], v[size]);
        v.pop_back();
        heapify(1);
    }

    int top(){
        return v[1];
    }

    bool isEmpty(){
        return v.size()==1;
    }
};

int main() {
    Heaps h;
    h.push(4);
    h.push(5);
    h.push(0);
    h.push(40);
    h.push(50);
    while(!h.isEmpty()){
        cout<< h.top()<<" ";
        h.pop();
    }
}
