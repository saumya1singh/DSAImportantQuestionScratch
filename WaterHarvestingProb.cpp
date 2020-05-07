#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void waterHarvesting(int a[],int n){
int answer=0;
for(int i=1;i<n-1;++i){

//Max element on left
	int left=a[i];
	for(int j=0;j<=i;++j){
		left=max(left,a[j]);
	}

//Max element on right
	int right=a[i];
	for(int j=i+1;j<n;++j){
		right=max(right,a[j]);
	}

	answer+= min(left, right) - a[i];
}

	cout<<answer;
}

int main() {

	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	waterHarvesting(a,n);
	return 0;
}