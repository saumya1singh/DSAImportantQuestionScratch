#include <iostream>
#include <deque>
using namespace std;

//Maximum element in SubArray
//Deque Question SPOJ

int main() {
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>> a[i];
    }
    int k;
    cin>> k;

    deque<int> Q(k);
    //Operate separately for first k elements 
    int i;
    for(i=0; i<k; ++i){
        while(!Q.empty() && a[i]>=a[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
    }

    //Operate with remaining elements
    for(; i<n; ++i){
        cout<< a[Q.front()] <<" ";
        //Remove the element not part of sliding window
        while( (!Q.empty()) && (Q.front()<=i-k) ){
            Q.pop_front();
        }

        //Remove unuseful elements in window
        while( (!Q.empty()) && (a[i]>=a[Q.back()])){
            Q.pop_back();
        }

        //Push the elements (Explanation)
        Q.push_back(i);
    }
    cout<< a[Q.front()];

}
