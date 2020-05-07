#include <iostream>
using namespace std;

//Max Contiguos SubArray Sum effcient way

void findMAx(int a[], int n){
    int currentSum=a[0];
    int finalSum=a[0];

    for(int i=1;i<n;++i){
        currentSum=max(currentSum+a[i],a[i]);
        finalSum=max(finalSum,currentSum);
    }
    cout<<finalSum<<endl;
}
int main() {
    
    int tc;
    cin>>tc;

    while(tc--){

        int n;
        cin>>n;

        int a[10000];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }

        findMAx(a,n);
    }
}
