#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Solving the Sudoku Problem
// https://hack.codingblocks.com/app/practice/1/754/problem


bool canPlace(int mat[9][9],int i,int j,int n, int num){
    //check for row and column
    for(int x=0;x<9;x++){
        if(mat[i][x]==num || mat[x][j]==num){
            return false;
        }

        //check in the small sub matrix
        int root= sqrt(n);
        int sx= (i/root)*root;
        int sy= (j/root)*root;

        for(int x=sx; x<sx+root; ++x){
            for(int y=sy; y<sy+root; ++y){
                if(mat[x][y]==num){
                    return false;
                }
            }
        }
    }
    return true;
}

bool solveSudoku(int mat[9][9], int i, int j, int n){
    //base
    if(i==n){
        //print array
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cout<< mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    //check column end casee
    if(j==n){
        return solveSudoku(mat, i+1, 0, n);
    }

    //skip prefilled arary 
    if(mat[i][j]!=0){
        return solveSudoku(mat,i,j+1,n);
    }

    //try to asign numbers from 1 to 9 to the elemnt 
    for(int num=1;num<=9;++num){
        if(canPlace(mat,i,j,n,num)){
            mat[i][j]=num;

            bool canSolve= solveSudoku(mat,i,j+1,n);
            if(canSolve){
                return true;
            }
        }
    }

    //backtrack
    mat[i][j]=0;
    return false;
}




int main() {
    int n;
    cin>> n;

    int mat[9][9];

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>> mat[i][j];
        }
    }
    solveSudoku(mat,0,0,n);
}
