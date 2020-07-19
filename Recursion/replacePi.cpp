#include<iostream>
using namespace std;

void replacePi(char s[100], int i){
	//Base
	if(s[i]=='\0'){
		return;
	}

	if(s[i]=='p' & s[i+1]=='i'){
		int j=i+2;
		while(s[j]!='\0'){
			j++;
		}
		while(j>=i+2){
			s[j+2]= s[j];
			j--;
		}
		s[i]='3';
		s[i+1]='.';
		s[i+2]= '1';
		s[i+3]= '4';
		replacePi(s, i+4);
	}
	replacePi(s, i+1);
}


int main() {
	int tc;
	cin>> tc;

	while(tc--){
		char s[100];
		cin>> s;
		replacePi(s, 0);
	
		cout<<s;
		cout<<endl;
	}
	return 0;
}