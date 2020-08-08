#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Print first non-repeating characters

void findNonRepeating(char str[]){
    queue<char> q;
    int freq[CHAR_MAX]= {0};

    for(int i=0; str[i]!='\0'; ++i){
        q.push(str[i]);
        freq[str[i] - 'a']++;

        while(!q.empty()){
            if(freq[q.front() - 'a'] > 1){
                q.pop();
            }else{
                cout<< q.front()<< endl;
                break;
            }
        }
        if(q.empty()){
            cout<< "-1"<< endl;
        }
    }
}


int main() {
    char str[CHAR_MAX];
    cin>> str;

    findNonRepeating(str);
}
