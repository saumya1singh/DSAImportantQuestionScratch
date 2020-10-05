#include <iostream>
#include<set>
using namespace std;

//set and multiset STL
//set- unique and sorted data, associative container(access elements by value not index, most of the complexity is in logarithmic times)
//multiset- can store multiple elements with the same value, comparator can be defined to sort the data 

class sort_comparator{
    public:
    bool operator()(pair<int, string> p1, pair<int, string> p2){
        return p1.second< p2.second;
    }
};

int main() {
    //Set STL
    int a[]= {1, 2, 1, 2, -1, 0, 0, 3, 3, 4, 5, 5};
    int n= sizeof(a)/sizeof(int);
    set<int> s;
    for(int i=0; i<n; ++i){
        s.insert(a[i]);
    }
    s.erase(0);
    for(auto it: s){
        cout<< it<< " ";
    }
    cout<< endl;
    auto it= s.lower_bound(1);
    cout<< "Lower Bound (<=num): "<< *it<< endl;
    auto it_= s.upper_bound(3);
    cout<< "Upper Bound (>num): "<< *it_<< endl;


    //Multiset STL
    multiset<pair<int, string>, sort_comparator> m;
    
    m.insert( make_pair(3, "MSDojo"));
    m.insert( make_pair(1, "Saumya Singh"));    
    m.insert( make_pair(1, "Saumya Singh"));
    m.insert( make_pair(2, "Wick White"));
    m.insert( make_pair(3, "MSDojo"));

    for(auto it: m){
        cout<< it.first<< " "<< it.second << endl;
    }

    // auto itupper= m.upper_bound(make_pair(2, "Nick White"));
    // cout<< *itupper.first<< " "<< *itupper.second;
}
