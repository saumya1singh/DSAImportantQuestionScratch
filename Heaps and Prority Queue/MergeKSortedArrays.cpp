#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/merge-k-sorted-lists/solution/
typedef pair<int, pair<int,int>> node;

vector<int> mergeKSortedArrays(vector<vector<int>> a){
    priority_queue<node, vector<node>, greater<node>> pq;
    vector<int> ans;
    //Push first element of each sorted array into priority Queue
    for(int i=0; i<a.size(); ++i){
        pq.push( {a[i][0], {i, 0}} );
    }

    while(!pq.empty()){
        node current= pq.top();
        pq.pop();
        int element= current.first;
        int row= current.second.first;
        int col= current.second.second;
        ans.push_back(element);

        if(col+1<a[row].size()){
            pq.push({a[row][col+1], {row, col+1}});
        }
    }
    return ans;
}


int main() {
    vector<vector<int>> a= {{2,6,12,15},
        {1,3,14,20},
        {3,5,8,10}};
    vector<int> ans= mergeKSortedArrays(a);

    for(int x:ans){
        cout<< x<<" ";
    }
}
