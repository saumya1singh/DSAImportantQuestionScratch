#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;

    int r,c;
    cin>>r>>c;

    int a[100][100]={0};

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>a[i][j];
        }
    }

    int pre[100][100]={0};
    pre[0][0]=a[0][0];

    for(int i=1;i<r;++i){
        pre[i][0]=a[i][0]+pre[i-1][0];
    }

    for(int j=0;j<c;++j){
        pre[0][j]=a[0][j]+pre[0][j-1];
    }

    for(int i=1;i<r;++i){
        for(int j=1;j<c;++j){
            pre[i][j]=a[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }

    
    while(t){
        int li, lj, bi, bj;
        cin>>li>>lj>>bi>>bj;

        int sum=0;

        for(int i=li;i<=bi;++i){
            for(int j=lj;j<=bj;++j){
                sum+=pre[i][j] - pre[i-1][j] - pre[i][j-1] + pre[i-1][j-1];
            }
        }

        cout<<"Query "<<sum<<endl;

        --t;
    }

}
