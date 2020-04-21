#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char a[1000]){

    int start_len=0;
    int end_len=strlen(a)-1;
    while(start_len<end_len){
     
    if(a[start_len]==a[end_len]){
        start_len++;
        end_len--;
    }
    else{
        return false;
    }
    }
    
    return true;
}

int main() {
    //Program to find Palindrome

    char a[1000];
    cin.getline(a,1000);

    if(checkPalindrome(a)){
        cout<<"String is Palindrome";
    }
    else{
        cout<<"String is not palindrome";
    }

}
