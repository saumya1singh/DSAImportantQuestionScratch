#include <iostream>
using namespace std;

int main() {    

    //Program to print the wave form of a 2-D Array
    int m,n;
    cin>> m>> n;

    int a[m][n];

    for(int row=0; row<m; ++row){
        for(int col=0; col<n; ++col){
            cin>> a[row][col];
        }
    }

    for(int col=0; col<n; ++col){

        //for Even Columns, move top->Bottom
        if(col%2==0){
            for(int row=0;row<m;++row){
                cout<<a[row][col]<< " ";
            }
        }
        else{
        //for Odd columns, move bottom->top    
            for(int row=m-1; row>=0; --row){
                cout<<a[row][col]<<" ";
            }
        }
    }

    return 0;
}
