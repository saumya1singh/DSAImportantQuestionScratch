#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    // char a[100];
    // cin.getline(a, 100, ' ');
    // cout<<a<<endl;
    int n;
    cin>>n;
    string str[1000];
    cin.get(); //read space
    for(int i=0;i<n;++i){
        getline(cin,str[i]);
    }

    for(int i=0;i<n;++i){
        cout<<str[i]<<endl;
    }
    
    
}
