/*

	Problem Link: https://leetcode.com/problems/partition-labels/
	
*/

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>a(26);
        int n = s.length();
        for(int i=0; i<n; i++){
            a[s[i]-'a'] = i;
        }
        int last = 0, maximum = -1;
        vector<int>ans;
        for(int i=0;i<n;i++){
            maximum = max(maximum, a[s[i]-'a']);
            if(i==maximum){
                ans.push_back(i-last+1);
                last = i+1;
            }
        }
        return ans;
    }
};
