#include <iostream>
using namespace std;

//Query Sum SubMatrix Problem
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

    while(t){
        int li, lj, bi, bj;
        cin>>li>>lj>>bi>>bj;

        int sum=0;
        for(int i=li;i<=bi;++i){
            for(int j=lj;j<=bj;++j){
                sum+=a[i][j];
            }
        }
        cout<<"query"<<" "<<sum<<endl;
        
        --t;
    }

}
