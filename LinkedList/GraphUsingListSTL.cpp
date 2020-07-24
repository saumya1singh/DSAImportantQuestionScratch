#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//List Example- Implementing Graphs

int main() {
    //Dynamically Create List
    list<pair<int, int>> *l;

    int n;
    cin>> n;
    l= new list<pair<int, int>>[n];

    int edge;
    cin>> edge;

    for(int i=0; i<n; ++i){
        int x, y, wt;
        cin>> x>> y>> wt;
        l[x].push_back(make_pair(y, wt));
        l[y].push_back(make_pair(x, wt));
    }

    //Print Linked List
    for(int i=0; i<n; ++i){
        cout<< "Linked List "<< i<< " ->";
        for(auto x: l[i]){
            cout<< "("<< x.first<<", "<< x.second<<"), ";
        }
        cout<< endl;
    }

}
