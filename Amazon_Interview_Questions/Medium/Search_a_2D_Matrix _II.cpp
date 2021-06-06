/*

	Problem Link: https://leetcode.com/problems/search-a-2d-matrix-ii/

*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ma, int k) {
        int n = ma.size();
        int m = ma[0].size();
        int i=0, j = m-1;
        while(i<n && j>=0){
            if(ma[i][j]==k)
                return true;
            if(ma[i][j] > k)
                j--;
            else
                i++;
        }
        return false;
    }
};
