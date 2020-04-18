#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Program to rotate the image(2D matrix)

void rotateImage(int a[][100], int m, int n){

    //reverse the Row of matrix
    for(int i=0;i<m;++i){
        reverse(a[i],a[i]+n);
    }

    //Transpose the half Matrix
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(i<j)
            swap(a[i][j],a[j][i]);
        }
    }

}

void display(int a[][100], int m, int n){

        for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
        }

}

int main() {

    int m, n;
    cin>>m>>n;

    int a[100][100];
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }

    rotateImage(a,m,n);
    display(a,m,n);
    
}
