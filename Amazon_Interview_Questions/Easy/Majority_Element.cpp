/*

Problem Link: https://leetcode.com/problems/majority-element/

*/


//Moore voting algorithm 
class Solution {
public:
   int majorityElement(vector<int>& nums) {
        int max_index = 0, count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[max_index] == nums[i])
                count++;
            else
                count--;
            if (count == 0) 
            {
                max_index = i;
                count = 1;
            }
            
        }
          return nums[max_index];
    }
};
