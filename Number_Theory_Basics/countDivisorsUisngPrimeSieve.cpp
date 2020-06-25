#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Finding Divisors using Sieve Approach

int countDivisors(int n, vector<int> primes){
    int cnt=0;
    int ans=1;
    for(int i=0;i<sqrt(n);++i){
        if(n%primes[i]==0){
            cnt=0;
            while(n%primes[i]==0){
                cnt++;
                n=n/primes[i];
            }
            ans= ans*(cnt+1);
        }
    }
    if(n!=1)
    ans= ans*2;
    return ans;
}



vector<int> findPrimesSieve(int p[], int n){
    vector<int> primes;
    p[0]=p[1]=0;
    p[2]=1;
    //make all odds as prime i.e mark them 1
    for(int i=3;i<=n;i+=2){
        p[i]=1;
    }
    //mark all the multiples of prime as 0
    for(int i=3;i<=n;i+=2){
        if(p[i]){
            for(int j=i*i;j<=n;j+=i)
            p[j]=0;
        }
    }

    //add prime numbers in the vector Primes
    for(int i=0;i<n;++i){
        if(p[i])
        primes.push_back(i);
    }
    return primes;
}



int main() {
    //create an array to store the Prime Numbers
    int p[10000];
    vector<int> primes= findPrimesSieve(p,10000);

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int ans= countDivisors(n,primes);
        cout<<ans<<endl;
    }
}
