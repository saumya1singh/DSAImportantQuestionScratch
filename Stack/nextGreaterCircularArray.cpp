#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(int n, int a[]){
	stack<int> s;
	vector<int> res(n, -1);

	for(int i=0; i<n; ++i){
		while(!s.empty() && a[i]>a[s.top()]){
			int index= s.top();
			res[index]= a[i];
			s.pop();
		}
		if(s.empty() || a[i]<=a[s.top()]){
			s.push(i);
		}
	}

	//for circular array
	while(!s.empty()){
		int index= s.top();
		s.pop();
		for(int i=0; i<=index; ++i){
			if(a[i]>a[index]){
				res[index]= a[i];
				break;
			}
		}
	}
	return res;
}

int main() {
	long n;
	cin>> n;
	int a[n];
	for(int i=0; i<n; ++i){
		cin>> a[i];
	}

	vector<int> ans= nextGreater(n, a);
	for(int i=0; i<n; ++i){
		cout<< ans[i]<< " ";
	}
	return 0;
}