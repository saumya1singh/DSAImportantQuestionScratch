/*

Problem Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res = {-1,-1};
        int l=0, r=nums.size()-1;
        if(r==-1)
            return res;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid;
        }
        
        if(nums[l]!=target)
            return res;
        
        res[0]=l;
        
        r=nums.size()-1;
        
        while(l<r){
            int mid=(l+r+1)/2;
            if(nums[mid]>target)
                r=mid-1;
            else
                l=mid;
        }
        
        res[1]=l;
        return res;
    }
};
