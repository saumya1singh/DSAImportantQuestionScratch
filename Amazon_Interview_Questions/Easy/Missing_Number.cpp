/*

Problem Link: https://leetcode.com/problems/missing-number/

*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0, n=nums.size();
        
        for(int i=0; i<n; i++){
            res ^= nums[i];
        }
        for(int i=0; i<=n; i++)
            res ^= i;
        return res;
    }
};
