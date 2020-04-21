#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main() {  
    //Program to find largest string
    int n;
    cin>>n;

    char a[1000];
    char lara[1000];

    int len=0;
    int larlen=0;

    cin.get();

    for(int i=0;i<n;++i){
    cin.getline(a,1000);

    len=strlen(a);

    if(len>larlen){
        larlen=len;
        strcpy(lara,a);
    }
    }

    cout<<lara<< endl;
    cout<<larlen<< endl;
}
