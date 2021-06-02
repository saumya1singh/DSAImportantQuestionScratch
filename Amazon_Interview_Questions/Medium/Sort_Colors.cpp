/*

Problem Link: https://leetcode.com/problems/sort-colors/

*/
	
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int m=0;
        while(m<=h){
            switch(nums[m]){
                case 0:
                    swap(nums[l++], nums[m++]);
                    break;
                    
                case 1:
                    m++;
                    break;
                    
                case 2:
                    swap(nums[m],nums[h--]);
                    break;
            }
        }
    }
};
