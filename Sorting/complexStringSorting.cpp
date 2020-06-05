#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*Sort all the strings ( lexicographically ) 
but if a string is present completely as a prefix in another string, 
then string with longer length should come first.*/

bool compare(string a,string b){

    if(a == b.substr(0,a.length())){
        return b.length()>a.length();
    }
    else if(b == a.substr(0,b.length())){
		return a.length()>b.length();
	}   
    return a<b;
}

int main() {
    int n;
    cin>>n;

    string s[n];
    for(int i=0;i<n;++i)
    cin>>s[i];

    sort(s,s+n,compare);

    for(int i=0;i<n;++i)
    cout<<s[i]<<endl;
}
