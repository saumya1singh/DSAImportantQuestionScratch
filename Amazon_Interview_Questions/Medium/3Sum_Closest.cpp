/*

Problem Link: https://leetcode.com/problems/3sum-closest/

*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0 ;
        int tmp = nums[0]+nums[1]+nums[2];        
        while( i < nums.size() - 2){
            int j = i + 1;
            int k = nums.size() - 1 ;
            while ( j < k ){
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(sum-target) < abs(tmp-target) )
                    tmp = sum;
                if ( sum > target ) 
                    k -= 1;
                else if ( sum < target ) 
                    j += 1;
                else 
                    return target;
            }
            i += 1;
        }
        return tmp;
    }
};
