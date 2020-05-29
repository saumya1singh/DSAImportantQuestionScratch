#include <iostream>
using namespace std;
int main() {
    int row, column;
    cin>> row>> column;

    int a[1000][1000]={0};


    for(int i=0;i<row;++i){
        for(int j=0;j<column;++j){

            cout<<a[i][j]<< " ";

        }
    }
}
