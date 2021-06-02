/*

Problem Link: https://leetcode.com/problems/maximum-subarray/

*/


//KADANE'S ALGORITHM

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, m=INT_MIN;
        for(auto num: nums){
            sum += num;
            m = max(m,sum);
            if(sum < 0)
                sum=0;
        }
        return m;
    }
};
