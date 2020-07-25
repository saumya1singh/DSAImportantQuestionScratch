#include <iostream>
using namespace std;

//Count Occurence of Hi in a given string!
int ans=0;

int countHi(string s){
    if(s.size()==0){
        return ans;
    }
    if(tolower(s[0]) =='h'  &&  tolower(s[1])=='i'){
        ans++;
        return countHi(s.substr(2));
    }else{
        return countHi(s.substr(1));
    }
}


int main() {
    string s;
    cin>> s;
    cout<< countHi(s);
}
