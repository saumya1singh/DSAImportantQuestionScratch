/*

Problem Link: https://leetcode.com/problems/sort-array-by-parity/

*/


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
      int l=0 , r=A.size()-1;
      while(l<r){
        if(A[l]%2!=0){
          swap(A[l],A[r]);
          r--;
        }
        else{
          l++;
        }
      }
      return A;
    }
};
