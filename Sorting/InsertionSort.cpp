#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Revising Insertion Sort
//Best- O(n)
//Worst- O(n^2)

void insertionSorting(int a[], int n){


	for(int i=1;i<n;++i){

		int key=a[i];
		int j=i-1;
		while(j>=0 & a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}

int main() {
	int n;
	cin>>n;

	int a[1000];
	for(int i=0;i<n;++i)
	cin>>a[i];

	insertionSorting(a,n);

	for(int i=0;i<n;++i)
	cout<<a[i]<<" ";

	return 0;
}