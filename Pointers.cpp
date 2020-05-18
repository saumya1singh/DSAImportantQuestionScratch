#include <iostream>
using namespace std;

int main() {

    //Static Alocation or Compile Time Allocation
    int a[100];
    cout<<sizeof(a)<<endl;

    //Dynamic Allocation or Run Time Allocation
    int n;
    cin>>n;
    int *ptr= new int[n];
    cout<<sizeof(ptr)<<endl;

    //Enter array elemnts
    for(int i=0;i<n;++i){
        cin>>ptr[i];
        cout<<ptr[i]<<" ";
    }

    delete []ptr;
}
