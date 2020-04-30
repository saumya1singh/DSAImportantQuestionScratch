#include <iostream>
using namespace std;
int main() {
    //Best approach to find the sumof all subMatrixes
    //Consider the contribution of each element

    int r, c;
    cin>>r>>c;

    int sum=0;

    int a[100][100]={0};

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            int x=(i+1)*(j+1);
            int y=(r-i)*(c-j);
            sum+=a[i][j]*x*y;
        }
    }

    cout<<sum;
}
