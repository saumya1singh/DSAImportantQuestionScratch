#include <iostream>
#include <queue>
using namespace std;

//https://hack.codingblocks.com/app/practice/1/967/problem
//Unit of time taken to convert calling order into ideal order

int timeTaken(int n, int calling[], int ideal[]){
    queue<int> q;
    for(int i=0; i<n; ++i){
        q.push(calling[i]);
    }
    int i=0; 
    int job;
    int totalTime=0;
    while(!q.empty()){
        job= q.front();
        if(job==ideal[i]){
            q.pop();
            totalTime++;
            i++;
        }else{
            q.pop();
            q.push(job);
            totalTime++;
        }
    }
    return totalTime;
}

int main() {
    int n;
    cin>> n;
    int calling[n];
    for(int i=0; i<n; ++i){
        cin>> calling[i];
    }
    int ideal[n];
    for(int i=0; i<n; ++i){
        cin>> ideal[i];
    }

    cout<< timeTaken(n, calling, ideal);
}
