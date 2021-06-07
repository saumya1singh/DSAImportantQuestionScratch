/*

	Problem Link: https://leetcode.com/problems/pascals-triangle-ii/

*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>res;
      for(int i=0; i <= rowIndex ; i++){
        res.push_back(1);
        for(int j=i-1 ; j>0 ;j--){
          res[j] = res[j-1] + res[j];
        }
      }
      return res;
    }
};
