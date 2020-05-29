#include<iostream>
using namespace std;


//You are given a one dimensional array that may contain both positive and negative integers, 
//find the sum of contiguous subarray of numbers which has the largest sum.

int main() {

	int tc;
	cin>>tc;

	// if(tc>20 || tc<1){
	// 	cin.clear();
	// 	cin.ignore(123,'\n');
	// }

	while(tc){
		int n;
		cin>>n;

		int num=0;
		int maxSum=0;

		int a[100000];

		for(int i=0;i<n;++i){
			cin>>a[i];
		}

	for(int i=0;i<n;++i){
		num+=a[i];

		if(num<0){
			num=0;
		}
		else if(maxSum<num){
			//update maxSum if a is greater than maxSum, if not gretaer then ignore
			maxSum=num;
		}
	}

	cout<<maxSum<<endl;	
	--tc;
	}
	return 0;
}