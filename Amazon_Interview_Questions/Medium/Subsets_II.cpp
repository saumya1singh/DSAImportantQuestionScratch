/*

Problem Link: https://leetcode.com/problems/subsets-ii/

*/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>v;
        set<vector<int>>s;
        vector<int>ans;
        for(int i=0; i< (1<<nums.size()); i++){
            ans.clear();
            for(int j=0; j<nums.size(); j++){
                if(i & (1<<j))
                    ans.push_back(nums[j]);
            }           
            sort(ans.begin(),ans.end()); 
            s.insert(ans);
        }
        for(auto i:s){
            v.push_back(i);
        }
        return v; 
    }
};
