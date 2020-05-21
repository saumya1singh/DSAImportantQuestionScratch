#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<pair<int,int>>v){
	
	//Creating Iterators for vectors
	vector<pair<int,int>>::iterator itr1;
	vector<pair<int,int>>::iterator itr2;
	int ans=1;

	for(itr1=v.begin(),itr2=v.begin()+1; itr2!=v.end(); ++itr2){

		if(itr2->first >= itr1->second){
			itr1=itr2;
			ans++;
		}
	}

	cout<<ans<<endl;
	
}


bool compare(const pair<int,int>p1,const pair<int,int>p2){
	return p1.second<p2.second;
}

int main() {

	int tc;
	cin>>tc;

	while(tc--){
		int n;
        cin>>n;

		vector<pair<int,int>>v;
		int s,e;

		for(int i=0;i<n;++i){
			cin>>s>>e;
			v.push_back(make_pair(s,e));
		}

		sort(v.begin(),v.end(),compare);

		solve(v);

       
	}
	return 0;
}