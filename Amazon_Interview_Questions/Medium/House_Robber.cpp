/*

	Problem Link: https://leetcode.com/problems/house-robber/

*/

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        vector<int>a(n);
        if(n>=1)
            a[0] = nums[0];
        if(n>=2)
            a[1] = max(nums[0],nums[1]);
        for(int i=2; i<n; i++){
            a[i] = max(a[i-1],a[i-2]+nums[i]);
        }
        return a[n-1];
    }
};
