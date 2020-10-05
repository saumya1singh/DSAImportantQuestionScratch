class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1= s.length();
        int l2= t.length();
        if(l1 != l2){
            return false;
        }
        map<char, int> m;
        
        for(int i=0; i<l1; ++i){
            m[s[i]]++;
            m[t[i]]--;
        }
        
        for(int i=0; i<l1; ++i){
            if(m[s[i]] != 0){
                return false;
            }
        }
        return true;
    }
};

// Using Maps 
// 1. freq table for string s
// 2. freq table for string t
// 3. iterate over the string and match if frq count of each char is same in both strings or not

// Sort and Compare

// Optimised HashMap
// if lengthh not sane ten return out 
// 1. Create a map
// 2. Iterate over each char of string, increment freq of char of string s & decrement frew of same char of string t 
// 3. if m[i] is 0 for all i:0->length, anagram
// Space O(n)     Time: O(n)
// anagram             nagaram
// i=0:  m[a] = 1      m[n]= -1
// i=1:  m[n]= 0       m[a]= 1-1= 0
// i=2:   m[a]= 1        m[g]= -1
//       m[g]= -1+1=0    m[a]= 1-1= 0
//        m[r]=1          m[r]= 0
//       m[a]= 1         m[a]= 0
// i=6:   m[m]= 1         m[m]= 1-1=0

// rat  car
// r 1 