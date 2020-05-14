#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	string s;
	cin>>s;

	int count[1000];

	for(int i=0;i<s.size();++i){
		count[s[i]]++;
	}

	cout<<s[0]<<count[s[0]];
	
	for(int i=1;i<s.size();++i){
		if(s[i]==s[i-1]){	
			continue;
		}else{
		cout<<s[i]<<count[s[i]];
		}
	}
	return 0;
}