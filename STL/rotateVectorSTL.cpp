#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {

    vector<int> v={10,20,50,30,90};
    int n=v.size()-1;

    rotate(v.begin(),v.begin()+n,v.end());

    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
}
