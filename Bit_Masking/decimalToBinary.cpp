#include <iostream>
using namespace std;

//Convert Decimal to Binary 

void decimalToBinary(int n){

    int ans=0;
    int p=1;

    while(n){
    int last_dig= n&1;
    ans=ans+ (last_dig*p);
    p=p*10;
    n=n>>1;
    }

    cout<<ans;
   
}

int main() {
    int n;
    cin>>n;

    decimalToBinary(n);
}
