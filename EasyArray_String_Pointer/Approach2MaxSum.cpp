#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];

    int cSum[n]={0};
    cSum[0]=a[0];

    int currentSum=0, maxSum=0;
    int left=0, right=0;

    for(int i=1;i<n;++i){
        cin>>a[i];
        cSum[i]=cSum[i-1]+a[i];
    }

    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            currentSum=0;
            currentSum=cSum[j]-cSum[i-1];
        
            if(currentSum>maxSum){
                maxSum=currentSum;
                left=i;
                right=j;
            }
        }
    } 

    cout<<"Maximum Sum:"<< maxSum<< endl;
    
    for(int i=left;i<=right;++i){
        cout<<a[i]<<" ";
    }

}
