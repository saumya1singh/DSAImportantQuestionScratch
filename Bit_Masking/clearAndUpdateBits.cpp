#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//To clear ith bit of N i.e make it Zero
void clearIthBit(int n, int i){
    int mask= ~(1<<i);
    int ans= (n&mask);
    cout<<"After "<<i<< " Bit is Cleared "<<ans<<endl;
}


//Update ith Bit with value v
void UpdateIthBit(int n, int i, int v){
    int clearedBit= n & (~(1<<i));
    int mask= (v<<i);
    int ans= clearedBit|mask;
    cout<<"After Upadting " <<i<< " Bit by value v: "<<ans<<endl;
}



//Clear Last I Bits
void clearLastIbits(int n, int i){
    int mask= -1<<i;
    int ans= n&mask;
    cout<<"After clearing Last "<<i<<" Bit/Bits "<<ans<<endl;
}




//Clear bits from I to J
void clearRangeItoJ(int n, int i, int j){

    int a= (-1)<<(j+1);
    int b= (1<<i) - 1;
    int mask= a|b;
    int ans= n&mask;
    cout<<"On clearing Bits from "<< i<<" to "<<j<<": "<<ans<<endl;

}



int main() {
	int n=5;

	int i;
    cin>>i;

    clearIthBit(n,i);

    int v;
    cin>>v;
    UpdateIthBit(n,i,v);


    clearLastIbits(n,i);


    int j;
    cin>>j;
    clearRangeItoJ(n,i,j);
	return 0;
}