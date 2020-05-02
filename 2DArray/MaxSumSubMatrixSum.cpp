#include <iostream>
# include<bits/stdc++.h>
using namespace std;
//Find Max Sum Submatrix in a row and columnwise sorted matrix
void maxSumSubArray(int a[][100], int r, int c){
    int suf[100][100]={0};

    suf[r-1][c-1]=a[r-1][c-1];

    //last column suf Sum
    for(int i=r-2; i>=0; --i){
        suf[i][c-1]=a[i][c-1]+suf[i+1][c-1];
    }

    //last row Sum Suffix
    for(int j=c-2; j>=0; --j){
        suf[r-1][j]=a[r-1][j]+suf[r-1][j+1];
    }

    for(int i=r-2; i>=0; --i){
        for(int j=c-2; j>=0; --j){
            suf[i][j]=a[i][j]+ suf[i+1][j]+ suf[i][j+1]- suf[i+1][j+1];
        }
    }

    //     for(int i=0;i<r;++i){
    //     for(int j=0;j<c;++j){
    //         cout<<suf[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int maxSum=INT_MIN;
    //cout<<INT_MIN<<endl;

    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            if(suf[i][j]>maxSum)
                maxSum=suf[i][j];
        }
    }

    cout<<"SubMAtrix with max sum: "<<maxSum<<endl;
}

int main() {
    
    int r,c;  
    cin>>r>>c;

    int a[100][100]={0};

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>a[i][j];
        }
    }

    maxSumSubArray(a, r, c);

}
