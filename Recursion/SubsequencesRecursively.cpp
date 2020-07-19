#include <iostream>
using namespace std;

//Finding all subsequences in string 

void findSubsequence(string input, string output){
    //Base
    if(input.size()==0){
        //Print output
        cout<< output<<" ";
        return;
    }

    //store current character 
    char character= input[0];
    //Everytime pass the string from next index
    input= input.substr(1);
    //Include current character 
    findSubsequence(input, output+character);
    //Exclude the character
    findSubsequence(input, output);
}

int main() {
    string input;
    cin>> input;
    
    findSubsequence(input, " ");

}
