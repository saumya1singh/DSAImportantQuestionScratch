#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//TEST - Life, the Universe, and Everything on SPOJ

int main() {
	// your code goes here
	
	int n=INT_MAX;
    int a[n];
	
	for(int i=0;i<n;++i){
		cin>>a[i];
  
		if(a[i]!=42){
			cout<<a[i]<<endl;
		}else{
			break;
		}
	}
	
	return 0;
}