/*

Problem Link: https://leetcode.com/problems/first-unique-character-in-a-string/

*/
	
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
      for(int i=0;i<s.length();i++){
        m[s[i]]++;
      }
      char p;
      for(auto i:m){
        if(i.second == 1)
          p = i.first;
      }
      int l=-1;
      for(int i=0;i<s.length();i++){
        if(s[i]==p){
          l=i;
          break;
        }
          
      }
      return l;
    }
};
