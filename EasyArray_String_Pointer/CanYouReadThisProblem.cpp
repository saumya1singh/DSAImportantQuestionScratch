#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {

	string s;
	cin>>s;
	int k=s.size();

	cout<<s[0];

	for(int i=1;i<k;++i){
		if(isupper(s[i])){
			cout<<endl;
			cout<<s[i];
			continue;
		}else{
			cout<<s[i];
		}
	}
	return 0;
}