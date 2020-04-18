#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    //character Arrays

    //way1, not Recommended, because do not take null character 
    char s1[]={'h','e','l','l','o','\0'};
    cout<<s1<<endl;
    for(int i=0;i<sizeof(s1);++i)
    cout<<s1[i];
    cout<<endl;

    //way2, good way for 1D array
    char s2[]="hello";
    cout<<s2<<endl;

    //way3
    char s3[20];
    cin>>s3;
    cout<<s3<<endl;
    cout<<s3[4]<<endl;

    //way4
    char s4[10]="hello";
    cout<<s4<<endl;
    cout<<s4[1];

    
}
