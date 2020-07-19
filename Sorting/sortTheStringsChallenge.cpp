#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Sort the strings 
//https://hack.codingblocks.com/app/practice/1/1042/problem


string extractStringAtKey(string s, int key){
    char *str= strtok((char*)s.c_str(), " ");
    while(key>1){
        str= strtok(NULL, " ");
        key--;
    }
    return string(str);
}



int convertToInt(string key){
    int ans=0;
    int p=1;
    for(int i=key.length()-1; i>=0; --i){
        ans += ((key[i]-'0')*p);
        p=p*10;
    }
    return ans;
}



bool numericCompare(pair<string, string> p1, pair<string, string> p2){
    string key1, key2;
    key1= p1.second;
    key2= p2.second;

    return convertToInt(key1)<convertToInt(key2);
}



bool lexicoCompare(pair<string, string> p1, pair<string, string> p2){
    string key1, key2;
    key1= p1.second;
    key2= p2.second;

    return key1<key2;
}



int main() {
    int n;
    cin>>n;
    cin.get();

    //accept the strings
    string s[100];
    for(int i=0; i<n; ++i){
        getline(cin,s[i]);
    }
    int key;
    string reversal;
    string ordering;
    cin>>key>> reversal>> ordering;

    pair<string, string> p[100];
    for(int i=0; i<n; ++i){
        p[i].first= s[i];
        p[i].second= extractStringAtKey(s[i],key);
    }

    //sorting
    if(ordering== "numeric"){   
    for(int i=0; i<n; ++i){
        sort(p, p + n, numericCompare);
    }}
    else{
        sort(p, p + n, lexicoCompare);
    }
    

    //Reversal
    if(reversal=="true"){
        for(int i=0; i<n/2; ++i){
            swap(p[i], p[n-i-1]);
        }
    }

    //Print
    for(int i=0; i<n; ++i){
        cout<< p[i].first <<endl;
    }

}
