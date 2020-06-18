#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Find Substrings in a given string
//string= "abc" substrings are " ",a,b,c,ab,bc,ca,abc 
//total substrings= 2^n, n=lenght of string
//if n=3 total substrings=8 

void filterCharacter(int n, char a[]){

    int j=0;
    while(n>0){
        int last_bit= (n&1);
        if(last_bit==1){
            cout<<a[j]<<" ";
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}


void printSubstrings(char a[]){
    int n= strlen(a);
    for(int i=0;i< (1<<n);++i){
        //Filter the characters according to the set bits
        filterCharacter(i,a);      
    }  
}


int main() {
    char a[100];
    cin>>a;

    printSubstrings(a);
}
