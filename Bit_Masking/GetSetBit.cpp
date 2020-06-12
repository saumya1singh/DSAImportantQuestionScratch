#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Check if given num is Odd or Even using BitWise Operator
void findOddEven(int n){
    if(n&1){
        cout<<"Odd Number"<<endl;
    }
    else{
        cout<<"Even Number"<<endl;
    }
}


//Get ith Bit of given num n
void getBit(int n, int i){
    int mask= (1<<i);

    if((n&mask)>0){
        cout<<i<<" Bit in N is "<<1<<endl;
    }else{
        cout<<i<<" Bit in N is "<<0<<endl; 
    }

}


void setBit(int n, int i){
    int mask=(1<<i);
    int ans= (n|mask);
    cout<< ans <<endl;
}

int main() {
	int n=5;

	int i;
    cin>>i;

    //Find Odd or Even 
    findOddEven(n);

    //Get ith Bit
    getBit(n,i);

    //Set ith Bit i.e make it 1
    setBit(n,i);
	return 0;
}