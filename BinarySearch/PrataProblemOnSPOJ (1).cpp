#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Prata Problem on SPOJ by Saumya Singh

bool isPossible(int p, int n, int cook[], int middle){
    int cnt=0;
    for(int i=0;i<n;++i){
        //For each and every chef count the total number of Paranta in given interval of time
        int time=middle;
        int perParata= cook[i];
        int count=0;
        while(time>0){          
                time=time-perParata;
                if(time>=0){
                perParata=perParata+cook[i];
                count= count+1; 
                }
            
        }
        cnt+=count;
        if(cnt>=p){
        return true; 
    }
    }
    return false;
}


int minTime(int p, int n, int cook[]){
    //Find middle and check if that is possible answer or not 
    int s=0;
    int e=10000007;
    int ans=INT_MAX;
    int middle;

    while(s<=e){
        middle= (s+e)/2;
        if(isPossible(p,n,cook,middle)){
        //if middle is a possible value then try finding for less values
        
        e=middle-1;
        ans=min(ans,middle);
        }else{
        s=middle+1;
        }
    }   
    return ans;
}


int main() {

    int tc;
    cin>>tc;

    while(tc--){

        int p;
        cin>>p;

        int n;
        cin>>n;

        int cook[10000];
        for(int i=0;i<n;++i){
            cin>>cook[i];
        }
        cout<<minTime(p,n,cook)<<endl;
    }


}
