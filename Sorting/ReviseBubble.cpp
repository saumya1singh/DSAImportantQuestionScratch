#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Understanding Bubble Sorting
//Best- O(n)
//worst- O(n^2)

void swapMethod(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubbleSorting(int n, int a[]){

	//Total num of passes
	for(int i=0;i<n;++i){

		//Loop inside each pass
		for(int j=0;j<n-1;++j){
			if(a[j]>a[j+1])
			swapMethod(&a[j],&a[j+1]);
		}

	}
}


int main() {

	int n;
	cin>>n;
	int a[10000];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	bubbleSorting(n,a);

	for(int i=0;i<n;++i){
		cout<<a[i]<<endl;
	}
	return 0;
}