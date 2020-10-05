#include <bits/stdc++.h>
using namespace std;
/*
Given a positive integer n and 3 operations on n:

n - 1
n / 2 (if n is even)
n / 3 (if n % 3 == 0)
Find the minimum number of above operations to reduce n to 1.

Example 1:

Input: n = 9
Output: 2
Explanation:
Step 1: 9 / 3 = 3
Step 2: 3 / 3 = 1
Example 2:

Input: n = 8
Output: 3
Explanation:
Step 1: 8 / 2 = 4
Step 2: 4 / 2 = 2
Step 3: 2 - 1 = 1
Example 3:
Input: n = 28
Output: 4 */


int minStepsBU(int n){
    int dp[100]={0};    
    dp[1]= 0;

    for(int i= 2; i<=n; ++i){
    int op1= INT_MAX, op2= INT_MAX, op3= INT_MAX; 
    if(n%2==0){
        op1= dp[i/2];
    }
    if(n%3==0){
        op2= dp[i/3];
    }
    op3= dp[i-1];
    dp[i]= min(min(op1, op2), op3) + 1;
}
    return dp[n];
}


int minStepsTD(int n, int dp[]){
    //Base
    if(n==1){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    //Recursive                                                                              
    int op1= INT_MAX, op2= INT_MAX, op3= INT_MAX;              
    if(n%2 == 0){
        op1= minStepsTD(n/2, dp);
    }
    if(n%3==0){
        op2= minStepsTD(n/3, dp);
    }
    op3= minStepsTD(n-1, dp);
    int ans= min(min(op1, op2), op3) + 1;
    return ans;
}


int minStepsToOne(int n){
    //Base
    if(n==1){
        return 0;
    }
    //Recursive                                                                              
    int op1= INT_MAX, op2= INT_MAX, op3= INT_MAX;              
    if(n%2 == 0){
        op1= minStepsToOne(n/2);
    }
    if(n%3==0){
        op2= minStepsToOne(n/3);
    }
    op3= minStepsToOne(n-1);
    int ans= min(min(op1, op2), op3) + 1;
    return ans;
}


int main() {
    int n;
    cin>> n;
    cout<< "Recursive "<< minStepsToOne(n)<< endl;
    int dp[100]= {0};
    cout<< "DP Top Down "<< minStepsTD(n, dp)<< endl;    
    cout<< "DP Bottom Up "<< minStepsBU(n)<< endl;
}
