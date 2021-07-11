/*

Problem Link: https://leetcode.com/problems/happy-number/

*/

int newnum(int n){
  int sum=0,temp=0;
  while(n!=0){
    temp = n%10;
    n=(n-temp)/10;
    sum+=temp*temp;
  }
  return sum;
}

class Solution {
public:
    bool isHappy(int n) {
       for(int i=0;i<10000;i++){
         n= newnum(n);
       }
      if(n==1)
        return true;
      return false;
    }
};
