#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Find the prime factors of a given number using Prime_Sieve
//**Complexity- O(log n)
//Prime_Sieve will be useful if we have a lot of queries

vector<int> findFactors(int n, vector<int> prime){
    vector<int> factors_;
    factors_.clear();
    
    for(int i=0;i<=sqrt(n);++i){
    if(n%prime[i]==0){
        factors_.push_back(prime[i]);
        while(n%prime[i]==0){
            n=n/prime[i];
        }
    }
    }
    if(n!=1)
    factors_.push_back(n);

    return factors_;
}


//List of all the Prime Numbers in p[]
vector<int> prime_sieve(int p[], int n){
    p[0]=p[1]=0;
    p[2]=1;

    //mark all the odds as prime
    for(int i=3;i<=n;i+=2){
        p[i]=1;       
    }

    for(int i=3;i<=n;i+=2){
        //mark the multiples of primes as non-prime
        if(p[i]){
        for(int j=i*i;j<=n;j=j+i)
        p[j]=0;
        }
    }

    vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(p[i]){
            primes.push_back(i);
        }
    }
    return primes;
}


int main() {   
    int p[1000]={0};
    vector<int> primes= prime_sieve(p,1000);

    int test_cases;
    cin>>test_cases;

    while(test_cases--){
        int num;
        cin>>num;

        vector<int> factors_= findFactors(num,primes);
        for(auto f:factors_)
        cout<<f<<" ";
        cout<<endl;
    }
}
