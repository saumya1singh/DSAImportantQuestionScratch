//Word Search LEETCODE

//https://leetcode.com/problems/word-search/

class Solution {   
    bool search(vector<vector<char>>& board, int i, int j, string &word, int idx, vector<vector<bool>> &visited){       
        //Base Case
        if( idx== word.length()-1){
            return true;
        }
        visited[i][j]= true;
        //Check Upwards
        if(i>0 && board[i-1][j]==word[idx+1]  && !visited[i-1][j]  && search(board, i-1, j, word, idx+1, visited)) return true;
        
        //Check Leftwards
        if(j>0 && board[i][j-1]==word[idx+1]  && !visited[i][j-1]  && search(board, i, j-1, word, idx+1, visited))return true;
        
        //Check DownWards
        if(i<board.size()-1 && board[i+1][j]==word[idx+1]  && !visited[i+1][j]  && search(board, i+1, j, word, idx+1, visited))return true;
        
             
        //Check Right
        if(j<board[0].size()-1 && board[i][j+1]==word[idx+1]  && !visited[i][j+1]  && search(board, i, j+1, word, idx+1, visited))return true;
        
        visited[i][j]= false;
        return false;        
    }
    
     
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int rows= board.size();
        int col= board[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(rows, false));
        
        for(int i=0; i<rows; ++i)
            for(int j=0; j<col; ++j)
                if(board[i][j]==word[0]  &&  search(board, i, j, word, 0, visited))
                    return true;
        return false;       
    }
};