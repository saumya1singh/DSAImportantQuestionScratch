/*

Problem Link: https://leetcode.com/problems/insert-interval/

*/

class Solution {
public:
     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        vector<vector<int>> result;
        
        for (size_t i = 0; i < intervals.size(); i++)
        {
            if (intervals[i][1] < newInterval[0])
            {
                result.push_back(intervals[i]);
            }
            else if (intervals[i][0] > newInterval[1])
            {
                result.push_back(newInterval);
                newInterval = intervals[i]; 
            }
            else if(intervals[i][1] >= newInterval[0] || intervals[i][0] <= newInterval[1])
            {
                newInterval[0] = min(intervals[i][0], newInterval[0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);

            }
        }
        
        result.push_back(newInterval); 
        return result;
    }
};
