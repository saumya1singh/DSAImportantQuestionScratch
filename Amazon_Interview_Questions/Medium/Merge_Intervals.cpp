/*

Problem Link: https://leetcode.com/problems/merge-intervals/

*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0){
            return intervals;
        }
        
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
      
      for(int i=1;i<intervals.size();i++){
        if(ans.back()[1] >= intervals[i][0]){
          ans.back()[1] = (ans.back()[1]>intervals[i][1] ? ans.back()[1] : intervals[i][1]) ;
        }
        else if(ans.back()[1] < intervals[i][0]){
          ans.push_back(intervals[i]);
        }
      }
      return ans;
    }
};
