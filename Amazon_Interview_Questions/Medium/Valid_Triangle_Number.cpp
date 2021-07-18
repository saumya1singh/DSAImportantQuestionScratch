/*

Problem Link: https://leetcode.com/problems/valid-triangle-number/

*/

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
            return ans;
        for(int i=2; i<nums.size();i++){
            int left=0,right=i-1;
            while(left<right){
                if((nums[left]+nums[right]) > nums[i]){
                    ans += (right-left);
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return ans;
    }
};
