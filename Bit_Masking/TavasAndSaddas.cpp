#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Tavas and SaDDas Problem Codeforces 

int main() {

	char num[20];
	cin>>num;
	int digits= strlen(num);

	int ans=0;
	ans= (1<<digits)-2;  
    //total num of combinations possible, eg if 74 then possible combination is 2^2 44, 77, 47, 74 
    //Each digit has two possibities either 4 or 7

	for(int i=digits-1, count=0; i>=0; --i, count++ ){

		if(num[i]=='7'){
			ans+=pow(2,count);
		}
	}

	cout<<ans+1;
	return 0;
}