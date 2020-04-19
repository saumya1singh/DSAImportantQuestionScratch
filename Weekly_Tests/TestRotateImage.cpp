#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateImage (int a[][100], int n){

    //Reverse each row
    for(int row=0;row<n;++row)
    reverse(a[row], a[row]+n);


    //Transpose half
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
    if(i<j){
        swap(a[i][j],a[j][i]);
    }
    }}
}

    void display(int a[][100],int n){

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;}

    }
int main() {
    //Code to rotate a 2D array
    int n;
    cin>>n;

    int a[100][100];

    for(int i=0;i<n;++i)
    for(int j=0;j<n;++j)
    cin>>a[i][j];

    rotateImage(a,n);
    display(a,n);
}
