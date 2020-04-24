#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Sorting of strings 
bool compare(string a, string b){

    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()<b.length();

}

int main() {

    int n;
    cin>>n;

    string str[100];  //declaration of string array

    for(int i=0;i<n;++i){   //input the string array
        cin>>str[i];
    }

    sort(str, str+n, compare);  //build in STL sort method 

    for(int i=0;i<n;++i){
        cout<<str[i]<<endl;
    }

}
