#include <iostream>
using namespace std;

void searchMatrix(int a[][100], int r, int c, int key){

    int i=0;
    int j=c-1;

    while(i<r && j>=0){
        if(a[i][j]==key){
            cout<<"Found at "<<i<<","<<j;
            return;
        }else if(a[i][j]<key){
            ++i;
        }else{
            --j;
        }
    }
    //cout<<"Element not found";
}

int main() {
    
    int r,c;
    cin>>r>>c;

    int key;
    cin>>key;

    int a[100][100]={0};

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>a[i][j];
        }
    }

    searchMatrix(a,r,c,key);
}
