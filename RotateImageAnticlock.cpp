#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;

	int a[1000][1000];

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}

	//Reverse each Row
	for(int row=0;row<n;++row){
		reverse(a[row], a[row]+n);
	}

	//Transpose the matrix
	for(int i=0;i<n;++i){
		for(int j=n-1;j>=0;--j){
			if(i<j){
			swap(a[i][j], a[j][i]);
			}

		}
	}


	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}