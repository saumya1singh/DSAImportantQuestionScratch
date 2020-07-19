#include<iostream>
using namespace std;

//https://hack.codingblocks.com/app/dcb/508
//Print numbers from 1 to n in lexicographic order

void lexicoPrint(int n, int a){

	//Base
	if(a>n){
		return;
	}

	cout<<a<<" ";

	int i=0;
	if(a==0){
		i=1;
	}
	for( ; i<=9; ++i){
		lexicoPrint(n, a*10 + i);
	}
}

int main() {
	int n;
	cin>> n;

	lexicoPrint(n, 0);
	return 0;
}