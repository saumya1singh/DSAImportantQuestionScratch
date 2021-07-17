/*

Problem Link: https://leetcode.com/problems/reverse-integer/

*/

class Solution {
public:
    int reverse(int x) {
      int flag=0;
        if(x<0)
         flag=1;
        int num = abs(x);
        long int revNum = 0;
        
        while(num>0){
            int rem = num%10;
            if(revNum*10 > INT_MAX)
                return 0;
            revNum = revNum * 10 + rem;
            num /= 10;
        }
        if(flag==0)
            return revNum;
        else
            return revNum * (-1);
    }
};
