#include <iostream>
using namespace std;


//Move All characters to string end

void moveToEnd(string s, int i,char ch, int length){

    if(i>=length){
        return;
    }
    
    if(s[i]!=ch){
        cout<< s[i];
    }

    moveToEnd(s, i+1, ch, length);

    if(s[i]==ch){
        cout<< s[i];
    }
    return;
}


int main() {
    string s;
    cin>> s;
    char ch;
    cin>> ch;
    int length= s.length();

    moveToEnd(s, 0, ch, length);
}
