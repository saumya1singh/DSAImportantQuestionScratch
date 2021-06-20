/*

	Problem Link: https://leetcode.com/problems/combination-sum-ii/

*/

class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&cand, int sum, int start, vector<int>v){
        if(sum<0){      // if sum < 0 solution is not found.
            return;
        }
        else if(sum == 0){
            ans.push_back(v);
            return;
        }
    for(int i=start; i<cand.size();i++){
        if(i>start && cand[i]==cand[i-1])       //to avoid duplicates
            continue;
        
        if(sum-cand[i]<0)       //no point of searching if sum-cand[i]<0 
            break;
        
        //backtracking
        v.push_back(cand[i]);
        solve(cand,sum-cand[i],i+1,v);
        v.pop_back();
    }
 }
    
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(),cand.end());
        vector<int>v;
        solve(cand,target,0,v);
        return ans;
    }
};
