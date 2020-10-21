#include <iostream>
using namespace std;


int main() {
    string s;
    cin>> s;

    int visited[256];

    //initialize visited with -1
    for(int i=0; i<=256; ++i){
        visited[i]= -1;
    }
    visited[s[0]]= 0;
    int currentlength= 1;
    int maxlength= 1;

    //exp and contar
    for(int i=1; i<s.length(); ++i){
        int lastindex= visited[s[i]];

        //exp
        if( lastindex == -1  or  i-currentlength>lastindex){
            currentlength++;
            maxlength= max(maxlength, currentlength);
        }else{
            currentlength= i-lastindex;
            maxlength= max(maxlength, currentlength);
        }

        visited[s[i]]=i; 
    }

    cout<< "Maxlength of substring with unique char  "<< maxlength;
}
