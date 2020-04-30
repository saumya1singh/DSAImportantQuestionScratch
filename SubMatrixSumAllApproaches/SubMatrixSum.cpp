#include <iostream>
using namespace std;

//Brute Force approach for finding the sum of all submatrices of a matrix
int main() {
    int r,c;
    cin>>r>>c;

    int sum=0;

    int a[100][100];
    
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>a[i][j];
        }
    }

    for(int li=0;li<r;++li){
        for(int lj=0;lj<c;++lj){
            for(int bi=li-1;bi<r;++bi){
                for(int bj=lj-1;bj<c;++bj){
                    
                    for(int i=li;i<=bi;++i){
                        for(int j=lj;j<=bj;++j){
                             
                             sum+=a[i][j];
                             
                        }
                    }
                    
                }
            }
        }
    }

                cout<<"Sum="<<sum<<endl;
}
