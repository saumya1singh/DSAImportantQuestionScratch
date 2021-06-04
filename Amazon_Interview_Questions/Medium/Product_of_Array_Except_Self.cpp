/*

Problem Link: https://leetcode.com/problems/product-of-array-except-self/

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n= nums.size();
       vector<int>ans(n,1);
       
      //product of the values to the left
      int curLeft = 1;
      for(int i=0;i<n;i++){
        ans[i] = curLeft;
        curLeft *= nums[i];
      }
      
      //product of the values to the right
      int curRight = 1;
      for(int i=n-1;i>=0;i--){
        ans[i] *= curRight;
        curRight *= nums[i];
      }
      return ans;
    }
};
