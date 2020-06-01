#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Revising Selection Sorting
//Best- O(n^2)
//Worst- O(n^2)

void swapMethod(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSorting(int a[], int n){

	int midIndex;
	for(int i=0;i<n-1;++i){
		midIndex=i;

		for(int j=i+1;j<n;++j){
			if(a[j]<a[midIndex]){
				midIndex=j;
			}
		}
		swapMethod(&a[i],&a[midIndex]);
	}
}

int main() {

	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;++i)
	cin>>a[i];

	selectionSorting(a,n);

	
	for(int i=0;i<n;++i)
	cout<<a[i]<<endl;
	return 0;
}