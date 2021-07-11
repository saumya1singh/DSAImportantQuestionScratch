/*

Problem Link: https://leetcode.com/problems/longest-increasing-subsequence/

*/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0; i<n; i++) {
            auto it = std::lower_bound(ans.begin(), ans.end(), nums[i]);
            if(it==ans.end()){
                ans.push_back(nums[i]);
            }
            else {
                *it = nums[i];
            }
        }
        return ans.size();
    }
};
