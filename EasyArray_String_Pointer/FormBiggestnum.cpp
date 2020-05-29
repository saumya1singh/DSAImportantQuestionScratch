#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool myCompare( string x, string y){

	string xy=x.append(y);
	string yx=y.append(x);
	
	return xy>yx;

	}

int main() {
	int tc;
	cin>>tc;

	while(tc){

		int n;
		cin>>n;

	    string a[100];

		for(int i=0;i<n;++i){
			cin>>a[i];
		}

		sort(a, a+n, myCompare);

		for(int i=0;i<n;++i){
			cout<<a[i];
		}
		cout<<endl;
		tc--;
	}

	return 0;
}