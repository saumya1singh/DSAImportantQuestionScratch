/*

	Problem link: https://leetcode.com/problems/longest-palindromic-substring/
	
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        
        if(n==0)
            return "";  //returning an empty string if input string is empty.
        
        bool dp[n][n];
        
        memset(dp,0,sizeof(dp));  // Initialising all with 0
        
        for (int i = 0; i < n; i++) //for one length, the string will be palindrome
            dp[i][i] = true;
        
        int maxLen = 1;
        int start = 0; 
        //Now checking for substring of length 2.
        for (int i = 0; i < n - 1; ++i) { 
            if (s[i] == s[i + 1]) { 
                dp[i][i + 1] = 1; 
                start = i;  //Updating the start
                maxLen = 2; 
            } 
        }
        
        for(int k=3; k<=n; k++){ //Checking for length greater than 2 and k is length of substring 
            for(int i=0; i<n - k + 1; i++){
            	
                int j = i + k - 1; //Initializing the end Index i.e j = i + k - 1
                
                if(dp[i+1][j-1] == 1 && s[i] == s[j]){ //Checking for the conditions i.e checking for sub-string from ith index to jth index.
                    dp[i][j] = 1;
                    
                    if (k > maxLen) { 
                        start = i;  //Updating the start
                        maxLen = k; //Updating the maxLen
                    } 
                    
                }
            }
        }
        return s.substr(start, maxLen);
    }
};
