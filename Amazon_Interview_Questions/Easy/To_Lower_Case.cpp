/*

Problem Link: https://leetcode.com/problems/to-lower-case/

*/

class Solution {
public:
    string toLowerCase(string s) {
         transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};
