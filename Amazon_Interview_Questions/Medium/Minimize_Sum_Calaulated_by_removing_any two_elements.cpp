/*

	Article Link: https://www.geeksforgeeks.org/minimize-the-sum-calculated-by-repeatedly-removing-any-two-elements-and-inserting-their-sum-to-the-array/

*/

#include<bits/stdc++.h>
using namespace std;

int getMinSum(vector<int>&v, int n){
    priority_queue<int, vector<int>, greater<int>>pq;
    int sum=0;
    for(auto i:v){
        pq.push(i);
    }
    while(pq.size()>1){
        int m = pq.top();
        pq.pop();
        int t = pq.top();
        pq.pop();
        sum += (m+t);
        pq.push(m+t);
    }
    return sum;
}

int main(){
    int n; cin>>n;
    vector<int>v(n);
    int sum = 0;
    for(int i=0; i<n; i++)
        cin>>v[i];
    cout<<(getMinSum(v,n));
    return 0;
}
