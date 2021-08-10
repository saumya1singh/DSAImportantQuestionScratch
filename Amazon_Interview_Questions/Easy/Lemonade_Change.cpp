/*

	Problem Link: https://leetcode.com/problems/lemonade-change/

*/


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        if(bills[0]==10)
            return false;
        int five=0, ten=0;
        for(int i=0; i<n; i++){
            if(bills[i]==5)
                five += 1;
            else if(bills[i]==10){
                ten += 1;
                five -= 1;
            }
            else if(ten > 0){
                ten -= 1;
                five -= 1;
            }
            else
                five -= 3;
            if(five < 0)
                return false;
        }
        return true;
    }
};
