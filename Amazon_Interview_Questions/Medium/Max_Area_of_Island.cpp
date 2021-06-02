/*

Problem Link: https://leetcode.com/problems/max-area-of-island/

*/


class Solution {
public:
     int N, M;
    void dfs(int i, int j, vector<vector<int>>& grid, int& area) {
        if (i < 0 || i >= M || j < 0 || j >= N || !grid[i][j])
            return;
        grid[i][j] = 0;
        area++;
        dfs(i+1, j, grid, area);
        dfs(i-1, j, grid, area);
        dfs(i, j+1, grid, area);
        dfs(i, j-1, grid, area);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        M = grid.size();
        N = grid[0].size();
        int maxArea = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (grid[i][j]) {
                    int area = 0;
                    dfs(i, j, grid, area);
                    maxArea = max(area, maxArea);
                }
            }
        }
        return maxArea; 
    }
};
