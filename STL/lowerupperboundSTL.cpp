#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    int a[]={10,20,50,100,100,100,200};
    int n=sizeof(a)/sizeof(int);
    int key=100;

    //check if present or not
    bool present= binary_search(a,a+n,key);

    if(present){
        cout<<"Present"<<endl;
        auto lb_address= lower_bound(a,a+n,key);
        cout<<"LowerBound Address of "<<key<<"= "<<lb_address<<endl;
        cout<<"LowerBound Index of "<<key<<"= "<<lb_address-a<<endl;

        auto ub_address= upper_bound(a,a+n,key);
        cout<<"UpperBound Address of "<<key<<"= "<<ub_address<<endl;
        cout<<"UpperBound Index of "<<key<<"= "<<ub_address-a<<endl;

        cout<<"Occurrence of "<<key<<"= "<<ub_address-lb_address<<endl;
    }     
    else{
        cout<<"Not Present!";
    }
}
