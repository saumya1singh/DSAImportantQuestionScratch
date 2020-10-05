#include <iostream>
using namespace std;

//Friends Pairing Problem
//Given n friends find total ways in which they can go for party
//Friends can go for party either in couple or alone
int dp[100];

int totalNumberOfWays(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n]= totalNumberOfWays(n-1) + (n-1)*totalNumberOfWays(n-2);

    return dp[n];
}

int main() {
    int n;
    cin>> n;
    memset(dp, -1, sizeof dp);

    cout<< totalNumberOfWays(n);
}
