#include <iostream>
using namespace std;
int main() {

    //Program to check if sum of a pair of elements in Sorted Array is same as given k
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;++i)
    cin>> a[i];

    int k;
    cin>>k;

    int i=0;
    int j=n-1;

    while(i<j){

        //Find the currentSum and comapre with the value of k 
        int currentSum=a[i]+a[j];

        //if current value is smaller than the Target value
        //shift i since that will increase the sum
        if(currentSum<k){
            ++i;
        }
        else if(currentSum>k){
            --j;
        }
        else if(currentSum==k){
            cout<<a[i]<<" "<<a[j]<<endl;
            ++i;
            --j;
        }
    }

}
