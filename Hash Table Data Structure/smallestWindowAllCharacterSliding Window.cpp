#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Find the smallest window in a string containing all characters of another string
/*Input: string = “this is a test string”, pattern = “tist”
Output: Minimum window is “t stri”
Explanation: “t stri” contains all the characters of pattern.

Input: string = “geeksforgeeks”, pattern = “ork”
Output: Minimum window is “ksfor”
*/

string minWindow(string s, string p) {
        int ls= s.length();
        int lp= p.length();
        string ans;
        int start_idx= -1;
        int windowSize;
        int min_size= INT_MAX;
        if(lp>ls){
            return "";
        }
        //1. Frequency count of each char
        int fs[256]= {0};
        int fp[256]= {0};
        for(int i=0; i<lp; ++i){
            char ch= p[i];
            fp[ch]++;
        }
        
        int count=0;
        int start= 0; //for shrinking window from left
        //2. Sliding window- expansion, contraction and update minimum
        for(int i=0; i<ls; ++i){
            char ch= s[i];
            fs[ch]++;
            //Expansion
            if(fp[ch]!=0 && fs[ch]<=fp[ch]){
                count++;
            }
            if(count==lp){
                char c= s[start];
                //Contraction of the window
                while(fs[c]>fp[c] || fp[c]==0){
                    fs[c]--;
                    start++;
                    c= s[start];
                }
                
                //Window Size
                windowSize= i-start+1;
                if(windowSize<min_size){
                    min_size= windowSize;
                    start_idx= start;
                }              
            }
        }
        if(start_idx==-1)
            return "";
        ans= s.substr(start_idx, min_size); 
            return ans;
    }

int main() {
    string s;
    cin>> s;
    string pattern;
    cin>> pattern;

    cout<< minWindow(s, pattern);
}

