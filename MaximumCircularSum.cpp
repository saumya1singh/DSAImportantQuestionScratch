#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadane(int a[], int n);

void maxSum(int a[], int n){

	int maxSumWay1=kadane(a,n);
	int totalArraySum=0;
	int maxSumWay2=0;

	for(int i=0;i<n;++i){
		totalArraySum+=a[i];
		a[i]=-a[i];
	}

	maxSumWay2=totalArraySum-(-kadane(a,n));

	cout<< max(maxSumWay2,maxSumWay1)<<endl;
}

int kadane(int a[], int n){

		int currentSum=0;
		int finalSum=0;

		for(int i=0;i<n;++i){
			currentSum+=a[i];

			if(currentSum<0){
				currentSum=0;
			}
			else if(finalSum<currentSum){
				finalSum=currentSum;
			}
		}

		return finalSum;
}

int main() {

	int tc;
	cin>>tc;

	while(tc--){
		int n;
		cin>>n;

		int a[10000];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}

		maxSum(a,n);

	}
	return 0;
}