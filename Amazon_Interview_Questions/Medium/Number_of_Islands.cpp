/*

	Problem link: https://leetcode.com/problems/number-of-islands/
	
*/

class Solution {
    void mark_current_island(vector<vector<char>> &matrix,int x,int y,int r,int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1')  //Boundary case for matrix
            return;
        
        //Mark current cell as visited
        matrix[x][y] = '2';
        
        //Make recursive call in all four adjacent directions
        mark_current_island(matrix,x+1,y,r,c);  
        mark_current_island(matrix,x,y+1,r,c); 
        mark_current_island(matrix,x-1,y,r,c);  
        mark_current_island(matrix,x,y-1,r,c); 
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int rows = grid.size();
        if(rows==0)     
            return 0;
        int cols = grid[0].size();
        
        
        int no_of_islands = 0;
        for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
            {
                if(grid[i][j]=='1')
                {
                    mark_current_island(grid,i,j,rows,cols);
                    no_of_islands += 1;
                }
            }
        }
        return no_of_islands;
    }
};
