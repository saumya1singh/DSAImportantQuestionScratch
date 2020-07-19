#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//https://hack.codingblocks.com/app/practice/1/394/problem

string str;

void permute(string inp, int i){
	//Base Condition
	if(inp[i]=='\0'){
		if(inp>str){
			cout<< inp<< endl;
		}
		return;
	}
	//Recursive Part
	for(int j=i; inp[j]!='\0'; ++j){
		swap(inp[i], inp[j]);
		permute(inp, i+1);
		//Backtrack to get original string
		//swap(inp[i], inp[j]);
	}
}
int main() {
	cin>> str;

    string temp= str;
    sort(temp.begin(), temp.end());
	permute(temp, 0);
	return 0;
}