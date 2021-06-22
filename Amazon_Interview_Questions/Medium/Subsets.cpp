/*

Problem Link: https://leetcode.com/problems/subsets/

*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>ans;
        for(int i=1; i< (1<<nums.size()); i++){
            ans.clear();
            for(int j=0; j<nums.size(); j++){
                if(i & (1<<j))
                    ans.push_back(nums[j]);
            }
            v.push_back(ans);
        }
        ans.clear();
        v.insert(v.begin(),ans);
        return v; 
    }
};

