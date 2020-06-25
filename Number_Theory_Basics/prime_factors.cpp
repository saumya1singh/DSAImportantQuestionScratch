#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Prime Factorisation of a given number
//Naive- O(n)
//Optimsed- O(sqrt(n))
//Prime_Sieve Approach

void findPrimeFactors(int n){

    vector<pair<int,int>> factors;
    int cnt=0;
    for(int i=2;i<= sqrt(n);i++){  
        cnt=0;
        if(n%i==0){
            while(n%i==0){
                cnt++;
                n=n/i;
            }
            factors.push_back(make_pair(i,cnt));
        }     
    }

    //if n is not 1 then n is also a prime num and need to be added to the vector
    if(n!=1){
        factors.push_back(make_pair(n,1));
    }

    for(auto p:factors){
        cout<<p.first<<"^"<<p.second<<endl;
    }

}



int main() {
    int num;
    cin>>num;

    findPrimeFactors(num);
}
