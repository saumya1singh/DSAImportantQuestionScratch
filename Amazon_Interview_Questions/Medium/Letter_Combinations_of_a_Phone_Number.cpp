/*

	Problem Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/

*/

class Solution {
    vector<string>mappings = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
public:
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return ans;
        helper(digits, 0,"");
        return ans;
    }
    
    void helper(string &digits, int i, string combi){
        if(i==digits.length()){
            ans.push_back(combi);
            return;
        }
        for(auto &c : mappings[digits[i] - '2']){
            combi.push_back(c);
            helper(digits,i+1,combi);
            combi.pop_back();
        }
    }
};
