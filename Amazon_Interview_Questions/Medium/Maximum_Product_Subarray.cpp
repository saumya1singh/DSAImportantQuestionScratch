/*

	Problem Link: https://leetcode.com/problems/maximum-product-subarray/

*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int maxSub = nums[0];
        int minSub = nums[0];
        int maxProd = nums[0];
        for(int i=1; i<nums.size(); i++){
           /* when element is negative we do swap because 
			when multiplying with a negative integer, number becomes positive so minimum negative numebr will become the maximum number
			*/
            if(nums[i]<0)
                swap(maxSub, minSub);
            maxSub = max(maxSub*nums[i],nums[i]);
            minSub = min(minSub*nums[i],nums[i]);
            maxProd = max(maxProd,maxSub);
        }
        return maxProd;
    }
};
