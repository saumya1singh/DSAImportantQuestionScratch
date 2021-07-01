/*

Problem Link: https://leetcode.com/problems/prison-cells-after-n-days/

*/

class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<vector<int>>m;
        int n = cells.size();
        vector<int>temp(n);
        
        while(N--){
            for(int i=1; i<n-1; i++)
                temp[i] = cells[i-1] == cells[i+1] ? 1 : 0;
            //check if resultant array is already presentin lookup table
            if(m.size() > 0 && m.front()==temp)
                return m[N % m.size()]; //taking mod of cycle length
            else   
                m.push_back(temp);
            cells = temp;
        }
        return temp;
    }
};
