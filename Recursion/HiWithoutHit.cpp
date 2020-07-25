#include <iostream>
using namespace std;

//Count and Remove all Hi without Hit
int count=0;

void countRemoveHi(string s, int i, string ans){
    if(s.size()==0){
        cout<< count<< endl;
        cout<< ans[i]<< endl;
        cout<< ans;
        return;
    }

    if(tolower(s[0])=='h'  && tolower(s[1])=='i'  && tolower(s[2])!='t' ){
        count++;
        countRemoveHi(s.substr(2), i, ans);
    }else{
        countRemoveHi(s.substr(1), i, ans+s[0]);
    }
}

int main() {
    string s;
    cin>> s;
    int i;
    cin>> i;
    countRemoveHi(s, i, "");
}
