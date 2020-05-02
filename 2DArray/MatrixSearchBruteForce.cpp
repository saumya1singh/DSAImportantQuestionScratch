#include <iostream>
using namespace std;
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

    
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(key==a[i][j]){
                cout<<"Element found at "<<i<<","<<j;
            }
        
        }
    }

}
