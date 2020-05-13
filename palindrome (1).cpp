#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n, int a[1000]){

	int i=0;
	int j=n-1;

	while(i<j){

		if(a[i]==a[j]){
			++i;
			--j;
		}
		else{
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin>>n;

	

	int a[1000];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	if(palindrome(n,a)){
		cout<<"true";
	}else{
		cout<<"false";
	}
	return 0;
}