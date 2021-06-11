/*

	Problem Link: https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/

*/

class Solution {
public:
    bool checkPowersOfThree(int n) {
       for(int i=14; i>=0; i--){
           int no = pow(3,i);
           if(n-no >= 0) 
               n -= no;
           if(n==0)
               return true;
       }
        return false;
    }
};
