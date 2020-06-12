#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Given list of numbers, where each num is present twice except one
//Find that one num

int approach1(int num, int a[]){
    int ans;
    int freq[num]={0};
     for(int i=0;i<num;++i){     
        freq[a[i]]++;
    }

    for(int i=0;i<num;++i){
        if(freq[a[i]]==1){
            ans=a[i];
        }
    }

    return ans;
}

int approach2(int num, int a[]){
    int ans=0;
    for(int i=0;i<num;++i){
        ans=ans^a[i];
    }

    return ans;
}

int main() {
    int num;
    cin>>num;

    int a[num];
    
    for(int i=0;i<num;++i){
        cin>>a[i];       
    }

    cout<<"Approach 1:"<< approach1(num, a)<<endl;
    cout<<"Approach 2:"<< approach2(num, a);
  
}
