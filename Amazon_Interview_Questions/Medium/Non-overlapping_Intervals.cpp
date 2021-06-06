/*

	Problem Link: https://leetcode.com/problems/non-overlapping-intervals/

*/

bool comp(vector<int>&a, vector<int>&b){
    return a[1]<b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int size = intervals.size(), amountRemoved = 0;
        if(size <= 1)
            return 0;
        sort(intervals.begin(),intervals.end(),comp);
        int previousEnd = intervals[0][1];
        
        for(int i=1; i<size; i++){
            //if the current interval's start is less than the previous end, then there's a overlap
            if(intervals[i][0] < previousEnd){
                amountRemoved++;
            }
            //if there is no overlap, simply traverse
            else{
                previousEnd = intervals[i][1];
            }
        }
        return amountRemoved;
    }
};
