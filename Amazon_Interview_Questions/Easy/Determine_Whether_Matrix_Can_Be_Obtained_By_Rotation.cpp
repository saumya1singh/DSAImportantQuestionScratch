/*

	Problem Link: https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/

*/

class Solution {
public:
    bool findRotation(vector<vector<int>>& m, vector<vector<int>>& t) {
        
        int n = m.size();
        
        if(m==t)
            return true;
        int deg = 3;
      while(deg--){
            for(int i=0; i<n; i++){
                for(int j=i; j<n; j++){
                    swap(m[i][j],m[j][i]);
                }
            }
            for(int i=0; i<n; i++){
                reverse(m[i].begin(),m[i].end());
            }
          
            if(m==t)
                return true;
        }
        return false;
    }
};
