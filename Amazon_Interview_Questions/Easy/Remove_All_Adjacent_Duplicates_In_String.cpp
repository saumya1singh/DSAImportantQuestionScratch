/*

Problem Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

*/

class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        for(char c:s){
           if(res.size() && c==res.back())
               res.pop_back();
            else
                res.push_back(c);
        }
        return res;
    }
};
