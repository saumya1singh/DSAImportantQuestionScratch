#include <iostream>
using namespace std;

void findMin(int num){

    int freq[10]={0};

    //Finding freq of each digit in the number
    while(num){
        int dig=num%10;
        freq[dig]++;
        num=num/10;
    }

    //set LeftMost element with min digit present inside the number (No Zeroes)
    int answer=0;
    for(int i=1;i<=9;++i){
        if(freq[i]){
            answer=i;
            freq[i]--;
            break;
        }
    }

    //arrange all the num in ascending order
    for(int i=0;i<=9;++i){
        while(freq[i]--){
            answer= (answer*10) + i;
        }
    }

    cout<<answer<<endl;
}

int main() {
    
    int n;
    cin>>n;

    findMin(n);
}
