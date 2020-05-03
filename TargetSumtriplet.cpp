#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printTriplet(int a[1000], int n, int target){

		// int l=1;
		// int r=n-1;

		for(int i=0;i<n-3;++i){
		int l=i+1;
        int r=n-1;
		while(l<r){
			if((a[i]+a[l]+a[r])==target){
				cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
				--r;
				++l;
			}
			else if((a[i]+a[l]+a[r])>target){
				--r;
			}
			else if((a[i]+a[l]+a[r])<target){
				++l;
			}
		}

        
	}

}

int main() {

	int n;
	cin>>n;

	int a[1000]={0};

	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	int target;
	cin>>target;

    sort(a,a+n);

	printTriplet(a,n,target);

	return 0;
}