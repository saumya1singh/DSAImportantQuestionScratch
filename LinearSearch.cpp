#include <iostream>
using namespace std;

//Simple Linear Search Program
int main() {

    int a[1000], n, key;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    cin>>key;
    int i;
    for(i=0; i<n; ++i)
    {
        if(a[i]==key){
            cout<< key<< " found at index "<< i;
            break;
        }
    }
    if(i==n){
        cout<<"Key is not found!";
    }

}
