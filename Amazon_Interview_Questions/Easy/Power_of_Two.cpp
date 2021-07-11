/*

Problem Link: https://leetcode.com/problems/power-of-two/

*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
        while(n>0){
            c++;
            n&=(n-1);
        }
        if(c==1)
            return true;
        return false;
    }
};
