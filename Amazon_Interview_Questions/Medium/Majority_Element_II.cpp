/*

	Problem Link: https://leetcode.com/problems/majority-element-ii/
	
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        unordered_map<int, int>m;
        for(auto num: nums)
            m[num]++;
        for(auto i:m){
            if(i.second > nums.size()/3)
                v.push_back(i.first);
        }
        return v;
    }
};
