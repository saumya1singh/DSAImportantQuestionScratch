#include <iostream>
using namespace std;

//Count Twins
//AxAxA, twins= 3 (overlapping allowed)

int ans=0;

int countTwin(string s){
    if(s.size()==0){
        return ans;
    }

    if(s[0]==s[2]){
        ans++;
        return countTwin(s.substr(1));
    }else{
        return countTwin(s.substr(1));
    }
}

int main() {
    string s;
    cin>> s;
    cout<< countTwin(s);
}
