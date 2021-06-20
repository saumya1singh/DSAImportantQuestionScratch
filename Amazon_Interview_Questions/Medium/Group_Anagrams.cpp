/*

	Problem Link: https://leetcode.com/problems/group-anagrams/

*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        unordered_map<string,vector<string>>mymap;
        int n = s.size();
        string temp;
       for(int i=0; i<s.size(); i++){
           temp = s[i];
           sort(s[i].begin(),s[i].end());
           mymap[s[i]].push_back(temp);
       }
        vector<vector<string>>res;
        for(auto i:mymap){
            res.push_back(i.second);
        }
        return res;
    }
};
