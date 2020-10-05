#include <bits/stdc++.h>
using namespace std;

//Coin Change Problem- Minimum number of coins needed to make chnge


//Top Down DP
int minCoinsTD(int n, int coins[], int size, int dp[]){
    if(n==0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ans= INT_MAX;
    for(int i=0; i<size; ++i){
        if(n-coins[i] >= 0){
            int subProb= minCoinsTD(n-coins[i], coins, size, dp) + 1;
            ans= min(ans, subProb);
        }
    }
    return ans;
}


//Recursive Way
int minCoinsRecursive(int n, int coins[], int size){
    if(n==0){
        return 0;
    }
    int ans= INT_MAX;
    for(int i=0; i<size; ++i){
        if(n-coins[i] >= 0){
            int subProb= minCoinsRecursive(n-coins[i], coins, size)+1;
            ans= min(ans, subProb);
        }
    }
    return ans;
}

int main() {
    int n= 15;
    int coins[]= {1, 7, 10};
    int dp[100]= {0};
    int size= sizeof(coins)/sizeof(int);
    cout<< minCoinsRecursive(n, coins, size)<< endl;
    cout<< minCoinsTD(n, coins, size, dp)<< endl;
}
