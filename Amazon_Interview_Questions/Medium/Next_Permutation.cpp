/*

	Problem Link: https://leetcode.com/problems/next-permutation/

*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int n=nums.size();
        int i,ind1,ind2;
       for(i=n-2;i>=0;i--)
           if(nums[i]<nums[i+1]){
               ind1=i;
               break;
           }
        if(i<0){
            reverse(nums.begin(),nums.end());
            return;
        }
    for(i=n-1;i>ind1;i--){
        if(nums[i]>nums[ind1]){
            swap(nums[i],nums[ind1]);
            ind2=i;
            break;
        }   
    }
    reverse(nums.begin()+ind1+1,nums.end());
    }
};
