/*

	Problem Link: https://leetcode.com/problems/maximum-units-on-a-truck/

*/

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](auto& a, auto& b){  //sort by number of units per box.
           return a[1]>b[1]; 
        });
        int maxUnits = 0;
        for(auto& box : boxTypes){
            if(truckSize <= 0) 
                break;
            maxUnits += min(truckSize, box[0]) * box[1];
            truckSize -= box[0];
        }
        return maxUnits;
    }
};
