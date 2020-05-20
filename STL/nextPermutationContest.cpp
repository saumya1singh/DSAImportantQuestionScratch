#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int tc;
	cin>>tc;

	while(tc){

		int n;
		cin>>n;

		int a[1000];

		for(int i=0;i<n;++i){
			cin>>a[i];
		}

		if(next_permutation(a,a+n)){
			for(int i=0;i<n;++i)
			cout<<a[i]<<" ";
		}else{
			sort(a,a+n);
			for(int i=0;i<n;++i)
			cout<<a[i]<<" ";

		}
		cout<<endl;
		tc--;
	}
	return 0;
}