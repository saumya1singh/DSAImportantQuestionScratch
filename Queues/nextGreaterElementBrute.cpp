#include <iostream>
using namespace std;

//Next Greater Element in an array 
//Brute Force Approach
//On2 complexity
//Using stacks will reduce the complexity to on
void nextGreaterElement(int n, int a[]){
    int ans[n];
    for(int i=0; i<n; ++i){
        ans[i]= -1;
    }
    for(int i=0; i<n; ++i){
        for(int j= i+1; j<n; ++j){
            if(a[j] > a[i]){
                ans[i]= a[j];
                break;
            }else{
                continue;
            }
        }
    }

    for(int i=0; i<n; ++i){
        cout<< ans[i]<<" ";
    }
}

int main() {
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>> a[i];
    }

    nextGreaterElement(n, a);
}
