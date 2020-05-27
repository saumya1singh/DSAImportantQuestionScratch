#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Minimize the maximin num of pages to be read by each student

bool isPossible(int a[], int b, int s, int current_min){
    int studentNum=1;
    int pagesRead=0;

    for(int i=0;i<b;++i){

    if(pagesRead+a[i]>current_min){
        studentNum++;
        pagesRead=a[i];
        if(studentNum>s){
            return false;
        }
    }else{
        pagesRead+=a[i];
    }
    }
    return true;

}

int findMinPage(int a[],int b,int s){
    int sum=0;
    int ans=INT_MAX;
    if(b<s){
        return -1;
    }
    for(int i=0;i<b;++i)
    sum+=a[i];

    int st=a[b-1];
    int e=sum;
    while(st<e){
        int mid=(st+e)/2;
        if(isPossible(a,b,s,mid)){
            ans=min(ans,mid);
            e=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}



int main() {

    int tc;
    cin>>tc;

    while(tc--){
        //n Books and m students
        int b,s;
        cin>>b>>s;

        int a[10000];
        for(int i=0;i<b;++i){
            cin>>a[i];
        }

        cout<<findMinPage(a,b,s);
    }

    
}
