#include <iostream>
using namespace std;

    //Program to print the matrix in Spiral Pattern, Important
    void SpiralPrint(int a[][1000], int m, int n){
        int startRow=0;
        int startCol=0;
        int endRow=m-1;
        int endCol=n-1;

        //Print
        while(startRow<=endRow and startCol<=endCol){

            //First Row
            for(int i=startCol;i<=endCol;++i)
            cout<<a[startRow][i]<<" ";
            startRow++;

            //Last Column
            for(int i=startRow;i<=endRow;++i)
            cout<<a[i][endCol]<<" ";
            endCol--;

            //Last Row
            if(endRow>startRow){
            for(int i=endCol;i>=startCol;--i)
            cout<<a[endRow][i]<<" ";
            endRow--;
            }

            //First Column
            if(endCol>startCol){
            for(int i=endRow;i>=startRow;--i)
            cout<<a[i][startCol]<<" ";
            startCol++;
            }


        }

}    

int main() {
int m,n;
cin>>m>>n;

int a[1000][1000]={0};
int value=1;

for(int i=0;i<m;++i){
    for(int j=0;j<n;++j){
        a[i][j]=value;
        value=value+1;
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

SpiralPrint(a,m,n);

}
