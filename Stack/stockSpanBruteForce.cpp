#include <iostream>
#include<stack>
using namespace std;

//https://leetcode.com/problems/online-stock-span/

//O(n^2) Approach 
//Brute Force 

void stockSpan(int price[], int n, int span[]){
   span[0]= 1;
   for(int i=1; i<=n-1; ++i){
       span[i]=1;
       for(int j=i-1; j>=0 && price[j]<=price[i]; --j){
           span[i]++;
       }
   }
}



int main() {
    int price[]={100, 80, 60, 70, 60, 75, 85};
    int n= sizeof(price)/sizeof(int);
    int span[10000]={0};

    stockSpan(price, n, span);

    for(int i=0; i<n; ++i){
        cout<< span[i]<<" ";
    }
}
