/*

Problem Link: https://leetcode.com/problems/trapping-rain-water/

*/

class Solution {
public:
    int trap(vector<int>& height) {
        
        int k = height.size();
        
        vector<int>left(k);
        vector<int>right(k);
        
        int m = INT_MIN, z = INT_MIN ;
        
        for(int i=0; i<height.size(); i++){
            if(height[i] > m)
                m = height[i];
            left[i] = m;
        }
        for(int i=height.size()-1; i>=0; i--){
            if(height[i] > z)
                z = height[i];
            right[i] = z;
        }
        int sum = 0;
        for(int i=0; i<height.size(); i++){
            sum += (min(left[i], right[i]) - height[i]);
        }
        return sum;
    }
};	
