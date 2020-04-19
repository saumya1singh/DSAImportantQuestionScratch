#include <iostream>
using namespace std;

void spiralPrint(int a[][100], int m, int n){
    int startRow=0;
    int endRow=m-1;
    int startCol=0;
    int endCol=n-1;

    while(startRow<=endRow and startCol<=endCol){

        for(int i=startCol;i<=endCol;++i)
                cout<<a[startRow][i];
                startRow++;

        for(int i=startRow;i<=endRow;++i)
                cout<<a[i][endCol];
                endCol--;

        //last Row
        if(endRow>startRow){
        for(int i=endCol;i>=startCol;--i)
                cout<<a[endRow][i];
                endRow--;}

        //first Column
        if(endCol>startCol){
        for(int i=endRow;i>=startRow;--i)
                cout<<a[i][startCol];
                startCol++;}

    }


}

int main() {
    //Program to print the 2D array in form of Spiral

    int m,n;
    cin>>m>>n;

    int a[100][100]={0};

    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }

    spiralPrint(a,m,n);

}
