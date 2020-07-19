#include <iostream>
using namespace std;

//Phone Keypad

char table[][9]= {"abc", "def", "ghi", "jkl", "ijk", "lmno", "pqrs", "tuvx", "yz"};

void phone(string inp, string out){
    //Base
    if(inp.size()==0){
        cout<< out<< endl;
        return;
    }

    int dig= inp[0]-'0';

    //Recursive Part
    for(int k=0; table[dig][k]!='\0'; ++k){     
        phone(inp.substr(1), out + table[dig][k]);
    }
}


int main() {
    string n;
    cin>> n;  
    string out= "";
    phone(n, out);  
}
