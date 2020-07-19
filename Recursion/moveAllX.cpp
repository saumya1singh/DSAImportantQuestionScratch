#include <iostream>
using namespace std;

//MOve all x to end in  a given string
//https://hack.codingblocks.com/app/practice/1/1061/problem


string moveAllX(string input){

    if(input.size()==1){
        return input;
    }

    string subString= input.substr(1);
    subString= moveAllX(subString);
    if(input[0]=='x'){
        //shift input[0] to last
        return subString+input[0];
    }else{
        return input[0]+subString;
    }
}

int main() {
    string input;
    cin>> input;

    cout<< moveAllX(input);
}
