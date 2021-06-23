/*

Problem Link: https://leetcode.com/problems/permutation-sequence/

*/

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>a(n);
        for(int i=0; i<n; i++){
            a[i] = (i+1);
        }
        for(int i=1; i<k; i++){
            next_permutation(a.begin(), a.end());
        }
        string m="";
        for(int i=0; i<n; i++){
            m+=std::to_string(a[i]);
        }
        return m;
    }
};
