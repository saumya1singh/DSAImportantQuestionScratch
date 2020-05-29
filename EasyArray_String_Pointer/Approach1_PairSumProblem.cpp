#include <iostream>
using namespace std;
int main() {
    //Given a sorted array you have to find the pair of elements whose sum will be equivalent to k
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];

    int k;
    cin>>k;

    //Approch 1 with complexity N^2
    for(int i=0;i<n-2;++i){
        for(int j=i+1;j<n-1;++j){

            //For every i, we are checking the possibilty with all rest j element in the array
            if(a[i]+a[j]==k){
                cout<<"Pair of elements is:"<< a[i] <<" "<< a[j]<< endl;
                break;
            }
            // else if(i==n-3 && j==n-2 ){
                
            //     cout<<"No Such Pair Exists ";
            // }
            }
        }
    }


