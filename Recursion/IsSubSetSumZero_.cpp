#include <iostream>
using namespace std;

//https://hack.codingblocks.com/app/practice/1/1083/problem

bool subSetSum(int a[], int i, int size, int sum, bool included){
    //Base
    if(i==size){
        return (sum==0 && included);
    }

    //Include the current elemnt in Sum
    bool include= subSetSum(a, i+1, size, sum+a[i], true);

    //Don't inc;ude the current element in Sum
    bool exclude= subSetSum(a, i+1, size, sum, included);

    return include||exclude;
}

int main() {
    int tc;
    cin>> tc;

    while(tc--){
        int size;
        cin>> size;

        int a[size];
        for(int i=0; i<size; ++i){
            cin>> a[i];
        }
        bool ans= subSetSum(a, 0, size, 0, false);
        if(ans){
            cout<< "Yes"<< endl;
        }else{
            cout<< "No"<< endl;
        }
    }
}
