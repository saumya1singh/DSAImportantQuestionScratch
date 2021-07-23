/*

Problem Link: https://leetcode.com/problems/squares-of-a-sorted-array/

*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        int l=0, r=n-1;
        for(int i=n-1; i>=0; i--){
            if(abs(nums[r])>abs(nums[l]))
                res[i] = nums[r] * nums[r--];
            else
                res[i] = nums[l] * nums[l++];
        }
        return res;
    }
};
