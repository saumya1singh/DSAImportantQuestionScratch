/*

	Problem Link: https://leetcode.com/problems/longest-consecutive-sequence/

*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(auto i:nums)
        {
            s.insert(i);
        }
        
        int l=0;
        for(auto i:nums)
        {
            if(!s.count(i-1))
            {
                int n=i;
                int currentL=1;
                
                
                while(s.count(n+1))
                {
                    n+=1;
                    currentL+=1;
            
 }
                l=max(l,currentL);
            }
            
        }
        return l;
    }
};

