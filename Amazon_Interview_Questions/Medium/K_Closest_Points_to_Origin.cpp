
//Problem Link: https://leetcode.com/problems/k-closest-points-to-origin/


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
       int n = points.size();
        multimap<int,int>m;
        
        for(int i=0;i<n;i++){
            m.insert({points[i][0] * points[i][0] + points[i][1] * points[i][1], i});
        }
        
        vector<vector<int>>ans;
        
        int count = 0;
        
        for(auto it = m.begin(); count < k; ++it, ++count){
            ans.push_back(points[it -> second]);
        }
        return ans;
    }
};
