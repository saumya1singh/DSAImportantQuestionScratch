#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Vector Introduction

int main() {

    //Declare and Initialize the vector 

    vector<int> a;

    //5 ints with value 10
    vector<int> b(5,10);  

    vector<int> c(b.begin(), b.end());

    vector<int> d{10,20,30,40};

    //Iterate over the vector

    for(int i=0;i<d.size();++i)
    cout<<d[i]<<" ";

    cout<<endl;
    for(auto it=d.begin(); it!=d.end(); ++it)
    cout<<*it<<" ";

    cout<<endl;
    for(int x:d)
    cout<<x<<" ";
     cout<<endl;

    //User Interaction
    vector<int> v;
    int size;
    cin>>size;
    for(int i=0;i<size;++i){
        int n;
        cin>>n;
        v.push_back(n);
    }

    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    //More important methods in Vectors
    v.push_back(99);

    v.pop_back();

    v.insert(v.begin()+2, 40);


    v.insert(v.begin()+4, 3, 91);

    v.erase(v.begin()+5);

    cout<<v.front()<<endl;

    cout<<v.back()<<endl;


    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;




  
}
