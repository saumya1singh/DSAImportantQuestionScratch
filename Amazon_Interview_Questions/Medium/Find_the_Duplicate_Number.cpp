/*

Problem Link: https://leetcode.com/problems/find-the-duplicate-number/

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int hare = nums[0];
        int tortoise = nums[0];
        
        do{
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while(tortoise!=hare);
        
        tortoise = nums[0];
        while(hare!=tortoise){
            hare = nums[hare];
            tortoise = nums[tortoise];
        }
        return hare;
    }
};
