/*

	Problem Link: https://leetcode.com/problems/search-a-2d-matrix/

*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ma, int target) {
        if(ma.size() == 0)
            return false;
        int n = ma.size();
        int m = ma[0].size();
        
        int lo = 0;
        int hi = (n*m) - 1;
        
        while(lo <= hi){
            int mid = lo +(hi - lo)/2;
            if(ma[mid/m][mid%m] == target)
                return true;
            if(ma[mid/m][mid%m] > target)
                hi = mid - 1;
            else
                lo  = mid + 1;
        }
        return false;
    }
};
