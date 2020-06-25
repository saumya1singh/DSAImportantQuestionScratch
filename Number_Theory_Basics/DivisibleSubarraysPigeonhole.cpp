#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long

ll a[100000], freq[100000];

int main() {

	int testcase;
	cin>> testcase;

	while(testcase--){
		int n;
		cin>> n;
		
		memset(freq, 0, sizeof(freq));
		freq[0]=1;

		int sum=0;
		for(int i=0;i<n;++i){
			cin>> a[i];
			sum = sum+a[i];
			sum = sum%n;
			sum = (sum+n) % n;
			freq[sum]++;
		}

        //ans = ans + fC2 i.e frequency combination 2 
        // nC2= n!/ (n-1)! * 2!
		
		ll ans=0;
		for(int i=0; i<n; ++i){
			
				int f= freq[i];
				ans += ((f) * (f-1)) / 2;
			
		}

		cout<<ans<< endl;

	}
	return 0;
}