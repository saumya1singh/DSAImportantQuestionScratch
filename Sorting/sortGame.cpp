#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/* Sanju needs your help! He gets a list of employees with their salary. 
The maximum salary is 100.
Sanju is supposed to arrange the list in such a manner that the list is sorted in decreasing order of salary. 
And if two employees have the same salary, they should be arranged in lexicographical manner 
such that the list 
contains only names of those employees having salary greater than or equal to a given number x.
Help Sanju prepare the same!
Sample Input
79
4
Eve 78
Bob 99
Suzy 86
Alice 86
Sample Output
Bob 99
Alice 86
Suzy 86*/

bool compare(pair<string,int> p1, pair<string,int> p2){

    //if same salary, then sort on basis of
    //name in lexicographic order
    if(p1.second==p2.second){
        return p1.first<p2.first;
    }

    return p1.second>p2.second;
}

int main() {
    int x;
    cin>>x;

    int n;
    cin>>n;

    pair <string, int> p[n];

    for(int i=0;i<n;++i){
    cin>>p[i].first;
    cin>>p[i].second;
    }

    sort(p,p+n,compare);

    for(int i=0;i<n;++i){
        if(p[i].second>=x){
        cout<<p[i].first<<" ";
        cout<<p[i].second<<endl;
        }
    }

}
