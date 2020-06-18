#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Different Approaches to find Prime Numbers in a given range 
//Study Prime_Sieve_Method - an effcient approach to find prime numbers


//Naive approach
//**Complexity- O(N*N) for N numbers
bool isPrimeApproach1(int n){

    if(n==1 | n==0)
    return false;

    if(n==2)
    return true;

    //Here we can do optimization for better complexity
    for(int i=2;i<n;++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


//Slight Better than Naive Approach
//**Complexity- O(N. sqrt(N))
bool isPrimeApproach2(int n){

    if(n==1 | n==0)
    return false;

    if(n==2)
    return true;

    //optimization in limit of i for better complexity
    //Now we will check for the divisor from 2 to Root N only
    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



//Most optimised approach- Prime Sieve 
//**Complexity- O(N. loglogN) ~ O(N)
void prime_sieve(int *p, int b){

    //Mark all the odds as Prime i.e assign them 1
    for(int i=3;i<=b;i+=2){
        p[i]=1;
    }

    //Mark the multiples of all Primes as not prime
    //Start marking from square of the prime
    //e.g for 5 mark 25 as not prime ie 0and continue....
    //for 3 mark 9 as not prime ie 0 and continue....
    for(int i=3; i<=b; i+=2){
        if(p[i]==1){
            for(int j=i*i; j<=b; j=j+i){
                p[j]=0;
            }

        }
    }

    //Special Cases
    p[2]=1;
    p[0]=p[1]=0;
}

//Driver Method
int main() {

    //Find prime nums in the range a,b

    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;++i){
        if(isPrimeApproach1(i)){
            cout<<i<<" ";
        }
    }

        cout<<endl;

    for(int i=a;i<=b;++i){
        if(isPrimeApproach2(i)){
            cout<<i<<" ";
        }
    }

        cout<<endl;


    //Prime_Sieve with some extra optimisation
    //If number is prime then initialize the array with 1 else 0
    int p[b]={0};
    prime_sieve(p,b);

    for(int i=a;i<=b;++i){
        if(p[i]==1){
            cout<<i<<" ";
        }
    }    
}
