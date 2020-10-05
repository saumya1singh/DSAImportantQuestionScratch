#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int windowsize;
    cin>> windowsize;

    int n;
    cin>> n;
    queue<int> q;
    int sum= 0;
    while( n!= -1){
        sum= sum + n;
        q.push(sum);

        if(q.size() > windowsize){
            sum= sum - q.front();
            q.pop();
        }
        cout<< (double)sum/q.size()<< " ";
        cin>> n;
    }

}
