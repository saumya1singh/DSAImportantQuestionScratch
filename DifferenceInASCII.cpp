#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;

	int k=s.size();
	int diff;

	for(int i=0;i<k-1;++i){
		cout<<s[i];
		diff=s[i+1]-s[i];
		cout<<diff;
	}
	cout<<s[k-1];
	return 0;
}