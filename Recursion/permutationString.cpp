#include <iostream>
using namespace std;

// Finding permutation of a given string
// For a string of lenght n, possible permutations is n!
// For abc, total permutation possible is 3!=6
// Important concept of Recursion!

void permute(string a, int i){
    //base condition
    if(a[i]=='\0'){
        cout<<a<<endl;
        return;
    }

    //Recursion inside loop
    for(int j=i; a[j]!='\0'; ++j){
        swap(a[i], a[j]);
        permute(a,i+1);
        //backtracking to get the original string
        swap(a[i], a[j]);
    }
    return;
}

int main() {
    string s;
    cin>> s;

    permute(s,0);
    return 0;
}
