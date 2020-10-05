#include <iostream>
using namespace std;

//Solving fibonacci using all DP approaches
/* Fibonnaci: 1 1 2 3 5 8 ...
*/

int fibBUOptimised(int n){
    int a= 0;
    int b= 1;
    int c;
    for(int i=2; i<=n; ++i){
        c= a+b;  
        a= b; 
        b= c;
    }
    return c;
}

// fib=  0 1 1 2 3 5     
// dp = 0 1 2 3 4 5 
int fibBU(int n){
    int dp[100]= {0};
    dp[1]= 1;
    for(int i=2; i<=n; ++i){
        dp[i]= dp[i-1] + dp[i-2];
    }
    return dp[n];
}


 
int fibTD(int n, int dp[]){
    if(n==1 || n==0){
        return n;
    }
    //look up if value of dp[i] is already calculated| overlapping problems
    if(dp[n]!=0){
        return dp[n];
    }
    int ans= fibTD(n-1, dp) + fibTD(n-2, dp);
    return ans;
}


int fibRecursive(int n){
    if(n==0 || n==1){
        return n;
    }
    int ans= fibRecursive(n-1) + fibRecursive(n-2);
    return ans;
}


int main() {
    int n;
    cin>> n;
    int dp[100]= {0};
    cout<< "Normal Recursion -> Time: O(2^n)   Space: O(n)  "<< fibRecursive(n)<<endl;

    cout<< "Top to Down[recurion + Memorisation] -> Time: O(n)   Space: O(n)  "<< fibTD(n, dp)<<endl;

    cout<< "Bottom Up -> Time: O(n)   Space: O(n)  "<< fibBU(n)<<endl;       
    
    cout<< "Bottom Up[Space Optimised] -> Time: O(n)   Space: O(1)  "<< fibBUOptimised(n)<<endl;   

}
