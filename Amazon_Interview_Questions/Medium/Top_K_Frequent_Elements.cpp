/*

	Problem Link: https://leetcode.com/problems/top-k-frequent-elements/

*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int,int>m;
        for(int i=0; i<n; i++)
            m[nums[i]]++;
        
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        
        for(auto i:m){
           pq.push({i.second,i.first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int>v;
        while(pq.size()!=0){
            pair<int, int> top = pq.top();
            v.push_back(top.second);
            pq.pop();
        }
        return v;
    }
};
