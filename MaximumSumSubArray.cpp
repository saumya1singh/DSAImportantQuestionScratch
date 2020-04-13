#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n],maxSum=0;

    int left,right;
    for(int i=0;i<n;++i){
        cin>> a[i];
    }

    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            int currentSum=0;
            for(int k=i;k<=j;++k){
                currentSum+=a[k];
            }
            if(currentSum>maxSum){
                left=i;
                right=j;
                maxSum=currentSum;
            }
        }
    }
    cout<<"Maximum Sum:" << maxSum<< endl;
    
    for(int i=left;i<=right;++i){
        cout<< a[i]<< " ";
    }

}
