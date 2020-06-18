#include <iostream>
using namespace std;

//Repalce Bits in N by M from i to j
// N=110111, M=101, i=1, j=3 then Output= 111011

int clearedBits(int n, int i, int j){
    int a= (-1) <<(j+1);
    int b= (1<<i)-1;
    int mask= a|b;
    return n&mask;
}

int replaceBitsInNbyM(int n, int m, int i, int j){

    //find the cleared bit 
    int clear_bit= clearedBits(n,i,j);
    int mask= (m<<i);
    int ans= mask|clear_bit;
    return ans;
}

int main() {
    int n=15;
    int m=2;
    int i=1;
    int j=3;

    cout<<replaceBitsInNbyM(n,m,i,j)<<endl;
  
}
