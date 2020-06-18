#include <iostream>
using namespace std;

//In a list there are triplet of numbers, two numbers are alone/unique. Find those two unique number
//Unique Number Part 3
// list is 4,5,7,5,4,4,5  here output is 7

int main() {
    int n;
    cin>>n;

    int sum[n]={0};
    for(int i=0;i<n;++i){
        int num;
        cin>>num;
        int j=0;
        while(num>0){
            int last_bit=(num&1);
            sum[j]=sum[j]+last_bit;
            ++j;
            num=num>>1;
        }
    }
    int ans=0;
    int p=1;

    for(int i=0;i<n;++i){
        sum[i]=sum[i]%3;
        ans=ans+sum[i]*p;
        p=p*2;
    }
    cout<<ans;
   
}
