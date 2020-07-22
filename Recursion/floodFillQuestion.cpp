//Flood Fill Question on  Leetcode 

class Solution {
    
    void paint(vector<vector<int>>& image, int sr, int sc, int newColor, int rows, int columns, int source){
        //Base
        if(sr>=rows || sc>=columns || sr<0 || sc<0){
            return; 
        }else if(image[sr][sc]!=source){
            return;
        }
        
        image[sr][sc]= newColor;
        
        //North
        paint(image, sr-1, sc, newColor, rows, columns, source);
        
        //South        
        paint(image, sr+1, sc, newColor, rows, columns, source);
        
        //Right
        paint(image, sr, sc+1, newColor, rows, columns, source);
        
        //Left
        paint(image, sr, sc-1, newColor, rows, columns, source);
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        
        //if newColor is same as present source
        if(image[sr][sc]==newColor){
            return image;
        }
        
        int rows= image.size();
        int columns= image[0].size();
        int source= image[sr][sc];
        
        paint(image, sr, sc, newColor, rows, columns, source);
        return image;            
    }
};