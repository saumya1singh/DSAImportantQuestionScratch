#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Car Sorting Problem
//While ordering a cab i have to find dist of all nearby cabs from origin
//Approach 1 - Pairs + Vectors

bool compare(pair<int,int> p1, pair<int,int> p2){
    int d1= p1.first*p1.first + p1.second*p1.second;
    int d2= p2.first*p2.first + p2.second*p2.second;


    if(d1==d2){
        return p1.first<p2.first;
    }
    return d1<d2;
}

int main() {
    int car_num;
    cin>>car_num;
    vector<pair<int, int>> v;

    for(int i=0;i<car_num;++i){
        int x,y;
        cin>>x>>y;
      
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(), v.end(), compare);

    for(auto x:v){
        cout<< "Distance: "<<x.first<<", "<<x.second;
        cout<<endl;
    }
    
}
