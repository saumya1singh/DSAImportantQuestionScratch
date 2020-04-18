#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    //always column size is must, row size is optional

    //way1
    char a1[][10]={"abc","def","ghi"}; //3 Rows
    cout<<a1[1]<<endl; //Prints 1st Row
    cout<<a1[2]<<endl;


    //way2
    char a2[10][10];
    a2[2][2]='s';
    cout<<a2[2][2];


    //way3, Highly Recommended
    char a3[1000][1000];
    for(int i=0;i<1000;++i)
    cin.getline(a3[i],1000,'\0'); //getLine is widely used, it takes 3 params char array- size- delimiter
    for(int i=0;i<1000;++i)
    cout<<a3[i];



}
