/*

Problem Link: https://leetcode.com/problems/plus-one/

*/

class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int n = a.size();
        for(int i=n-1; i>=0; i--){
            if(a[i]==9){
                a[i]=0;
            }
            else{
                a[i]=a[i]+1;
                break;
            }
        }
        if(a[0]==0){
            a[0]=1;
            a.push_back(0);
        }
        return a;
    }
};
