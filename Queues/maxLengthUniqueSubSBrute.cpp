#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Maximum Length Unique Character Substring 
// abcdeaf, OP:5
//O(n^3)- Brute Firce Approach
bool isUnique(string s, int i, int j){
    vector<bool> visited(26);

    for(int k=i; k<=j; ++k){
        if(visited[s[k] - 'a'] == true){
            return false;
        }
        visited[s[k]]= true;
    }
    return true;
}

int maxLengthUniqueSS(string s, int n){
    int i, j;
    int maxLen= 0;
    for(i= 0; i<n; ++i){
        for(j= i; j<n; ++j){
            if(isUnique(s, i, j)){
                maxLen= max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}

int main() {
    string s;
    cin>> s;
    int n= s.length();
    cout<< maxLengthUniqueSS(s, n-1);
}
