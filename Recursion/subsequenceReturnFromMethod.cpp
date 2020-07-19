#include <iostream>
#include <vector> 
using namespace std;

//Subsequence
vector<string> findSubsequence(string inp){
    //Base
    if(inp.size()==0){
        vector<string> s;
        s.push_back(" ");
        return s;
    }

    char ch= inp[0];
    
    vector<string>  returned = findSubsequence(inp.substr(1));// ye jo recursion se vapas aayi
    
    vector<string> ans;// ye jo hum return karenge current recursion state k liye
    for(string s : returned)
    {
        ans.push_back(s);// ek baar same add ki returned vaali 
        ans.push_back(ch+s);// ek baar ch ko add krke push kiya 
    } 
    return ans;// final return kr diya 
}


int main() {
    string s;
    cin>> s;
    vector<string> list =findSubsequence(s);
    for(string s: list)
    cout<<s<<endl;
}
