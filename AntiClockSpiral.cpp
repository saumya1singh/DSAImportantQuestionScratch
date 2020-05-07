#include<iostream>
using namespace std;

void findSpiral(int a[][100], int m, int n){

	int startCol=0;
	int endRow=m-1;
	int endCol=n-1;
	int startRow=0;

	while(startRow<=endRow && startCol<=endCol){


	//firstCol
	for(int i=startRow;i<=endRow;++i)
		cout<<a[i][startCol]<<", ";
		startCol++;	


	//endrow
	for(int i=startCol;i<=endCol;++i)
		cout<<a[endRow][i]<<", ";
		endRow--;	

	//endcol
    if(endCol>startCol){

	for(int i=endRow;i>=startRow;--i)
		cout<<a[i][endCol]<<", ";
		endCol--;
    }

    if(endRow>startRow){

	//firstRow
	for(int i=endCol;i>=startCol;--i)
		cout<<a[startRow][i]<<", ";
		startRow++;
    }


	}
    cout<<"END";
}

int main() {
	int m,n;
	cin>>m>>n;

	int a[100][100];

	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}

	findSpiral(a,m,n);
	return 0;
}