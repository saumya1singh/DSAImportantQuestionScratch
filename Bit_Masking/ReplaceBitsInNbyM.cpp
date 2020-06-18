#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int clearBitMethod(int n, int i, int j){
    int a= -1 << (j+1);
    int b= (1<<i) - 1;
    int mask= a|b;
    return n&mask;
}

int replaceBits(int n, int m, int i, int j){
    int clearedBits= clearBitMethod(n,i,j);
    int ans= clearedBits|(m<<i);
    return ans;
}

int main() {
    int n=15;
    int i=1, j=3;
    int m=2;

    cout<<"After replacing "<<n<<" by "<<m<<" from index "<<i<<" to "<<j<<": "<<replaceBits(n,m,i,j)<<endl;
}
