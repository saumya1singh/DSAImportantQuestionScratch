#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//GCD or HCF of a and b using Brute Force Approach and Euclid's Algo
//Also find the LCM of a and b

int GCDusingBruteForce(int a, int b){
    int ans=0;
    int limit= min(a,b);
    for(int i=1;i<=limit;++i){
        if( (a%i==0) & (b%i==0) ){
            ans=max(ans,i);
        }
    }
    return ans;
}


//Best Approach for finding the GCD/HCF of two numbers
int GCDusingEuclidsAlgo(int a, int b){
    return b==0?a: GCDusingEuclidsAlgo(b,a%b);
}

//****Formula--- lcm*hcf=a*b
int findLCM(int a, int b){
    int ans= (a*b)/GCDusingEuclidsAlgo(a,b);
    return ans;
}

int main() {
    int a,b;
    cin>>a>>b;

    cout<< GCDusingBruteForce(a,b)<<endl;
    cout<< GCDusingEuclidsAlgo(a,b)<<endl;
    cout<< findLCM(a,b);

}
