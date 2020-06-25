#include <iostream>
using namespace std;

//Max sum in circular array 
//Max of Kadane and TotalSum-(-Kadane)

int sumUsingKadane(int n, int a[]);

int sumForCircular(int n, int a[]){
    int sum= 0;
    int ans;
    for(int i=0; i<n; ++i){
        sum+=a[i];
        a[i]=-a[i];
    }
    ans=sum-(-sumUsingKadane(n,a));
    return ans;
}


int sumUsingKadane(int n, int a[]){
    int maxEndsHere=0;
    int maxSum=0;
    for(int i=0;i<n;++i){
        maxEndsHere+=a[i];
        if(maxEndsHere<0){
            maxEndsHere=0;
        }
        if(maxSum<maxEndsHere){
            maxSum=maxEndsHere;
        }
    }
    return maxSum;
}


int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }

    int sumWay1= sumUsingKadane(n,a);
    cout<<sumWay1<<endl;

    int sumWay2= sumForCircular(n,a);
    cout<<sumWay2<<endl;

    cout<<max(sumWay1,sumWay2);
}
