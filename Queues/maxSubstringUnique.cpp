#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Maximum Length Unique Character Substring 
// abcdeaf, OP:5
// Sliding Window Approach

int main() {
    string s;
    cin>> s;
    int n= s.length();
    int current_len= 1;
    int max_len= 1;
    //If the character is not visited then it's index is -1
    int visited[256];
    
    for(int i=0;i<256;i++){
        visited[i] = -1;
    }
    
    for(int i=1; i<n; ++i){
        int last_occur= visited[s[i]];

        //Expand
        if(last_occur==-1 || i-current_len>last_occur){
            current_len= current_len + 1;
            max_len= max(current_len, max_len);
        }{        
        //Expand + Contract
            current_len= i-last_occur;
            max_len= max(current_len, max_len);
        }
        visited[s[i]]= i;
    }

    max_len= max(current_len, max_len);

    cout<< max_len;
}
