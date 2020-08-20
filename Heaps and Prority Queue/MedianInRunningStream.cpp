
#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-median-from-data-stream/
//Running Median in stream of integers
int main() {
    priority_queue<int> leftHeap; //Maxheap
    priority_queue<int, vector<int>, greater<int>> rightHeap; //MinHeap

    int d;
    cin>> d;
    float med= d;
    leftHeap.push(d);
    cout<< "Median "<<med<< endl; 
    cin>> d;
    while(d!=-1){
        if(leftHeap.size()<rightHeap.size()){
            if(d<med){
                leftHeap.push(d);
            }else{
                leftHeap.push(rightHeap.top());
                rightHeap.pop();
                rightHeap.push(d);
            }
            med= (leftHeap.top()+rightHeap.top())/2;
        }
        else if(leftHeap.size()==rightHeap.size()){
            if(d<med){
                leftHeap.push(d);
                med= leftHeap.top();
            }else{
                rightHeap.push(d);
                med= rightHeap.top();
            }
        }
        else{
            if(d<med){
                rightHeap.push(leftHeap.top());
                leftHeap.pop();
                leftHeap.push(d);
            }else{
                rightHeap.push(d);
            }
            med= (rightHeap.top()+leftHeap.top())/2;
        }

        cout<< "Median "<< med<< endl;
        cin>> d;
    }

}
