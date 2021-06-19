/*

	Problem Link: https://leetcode.com/problems/find-k-closest-elements/

*/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        priority_queue<pair<int,int>>p;
        for(int i=0; i<a.size();i++){
            p.push({abs(x-a[i]),a[i]});
            if(p.size()>k)
                p.pop();
        }
        vector<int>v;
        while(p.size()>0){
            auto t = p.top();
            v.push_back(t.second);
            p.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};
