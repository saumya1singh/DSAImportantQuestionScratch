#include <iostream>
#include<stack>
using namespace std;

//https://leetcode.com/problems/online-stock-span/

void stockSpan(int price[], int n, int span[]){
    //to store the indices of the days
    stack<int> s;
    s.push(0);

    span[0]= 1;
    for(int i=1; i<=n-1; ++i){
        int currentPrice= price[i];
        while(!s.empty()  and price[s.top()]<=currentPrice)
        s.pop();

        if(!s.empty()){
            int prev_highest= s.top();
            span[i]= i-prev_highest;
        }else{
            span[i]= i+1;
        }
        s.push(i);
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
