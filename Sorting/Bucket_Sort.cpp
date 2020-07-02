#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Bucket Sort
//Creating LeaderBoard 

class Student{
    public:
    int marks;
    string name;
};


void bucket_sort(Student s[], int n){
    //create vector
    vector<Student> v[101];
    for(int i=0; i<n; ++i){
        int marks= s[i].marks;
        v[marks].push_back(s[i]);
    }

    //Iterate over vector and print 
    for(int i=100; i>=0; --i)
    for(auto it=v[i].begin(); it!=v[i].end(); ++it){
        cout << (*it).marks<< " "<< (*it).name<< endl;
    } 
}


int main() {
    Student s[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>> s[i].name>> s[i].marks;
    }
    bucket_sort(s,n);
}
