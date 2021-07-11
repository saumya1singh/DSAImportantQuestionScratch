/*

Problem Link: https://leetcode.com/problems/contains-duplicate/

*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
      if(nums.size()==0 || nums.size()==1)
        return false;
      for(int i=0;i<nums.size()-1;i++){
        int t=i;
        if(nums[t] == nums[t+1])
          return true;
      }
      return false;
    }
  
};
