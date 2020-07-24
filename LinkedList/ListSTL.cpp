#include <iostream>
#include<list>
using namespace std;

//Understanding LIst STL

int main() {
    list<int> l1;
    list<string> l2{"apple", "mango", "banana"};
    list<int> l3{1,2};

    for(auto it: l3){
        cout<< it<<"->";
    }
    cout<< endl;
    //Push in front
    l3.push_front(0);

    //Push at back
    l3.push_back(3);

    for(auto it: l3){
        cout<< it<<"->";
    }
    cout<< endl;
    //show first
    cout<< "First Element of l3 : "<< l3.front()<< endl;

    //show last
    cout<< "Last Element of l3 : "<< l3.back()<< endl;

    l3.push_back(1);
    l3.push_front(1);
    
    for(auto it: l3){
        cout<< it<<"->";
    }
    cout<< endl;
    //Remove all occurences of 1
    l3.remove(1);

    
    for(auto it: l3){
        cout<< it<<"->";
    }
    cout<< endl;

    //Erase the element at index 1
    auto it= l3.begin();
    it++;
    l3.erase(it);


    for(auto it: l3){
        cout<< it<<"->";
    }
    cout<< endl;

    //Insert new element at any random postion
    //Let's Insert At index 1
    it= l3.begin();
    it++;
    l3.insert(it, 5);

    //SORT
    l3.sort();
    for(auto it: l3){
        cout<< it<<"->";
    }
    cout<< endl;

    //Reverse
    l3.reverse();

    
    for(auto it: l3){
        cout<< it<<"->";
    }
    cout<< endl;

    //POP Back and POP Front
}
