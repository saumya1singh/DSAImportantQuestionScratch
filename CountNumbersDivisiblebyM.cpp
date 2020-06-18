#include <iostream>
using namespace std;

//Given a range of numbers [A,B] find all the numbers that are divisible by M

int Approach1(int A, int B, int M){

    int count=0;

    for(int i=A;i<=B;++i){
        if(i%M==0){
            count++;
        }
    }
    return count;
}

int Approach2(int A, int B, int M){

    if(A%M == 0){
        return (B/M)-(A/M)+1;
    }
    else return (B/M)-(A/M);
}

int main() {

    int A,B;
    cin>>A>>B;
    int M;
    cin>>M;

    cout<<Approach1(A,B,M)<<endl;
    cout<<Approach2(A,B,M);

}
