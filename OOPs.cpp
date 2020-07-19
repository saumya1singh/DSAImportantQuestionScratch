#include <iostream>
using namespace std;

class Car{
    private:
    string name;
    

    public:
    int price;
    void setName(string s){
        name= s;
    }
    void getName(){
        cout<< name<< endl;
    }
};

int main() {
    Car C;
    C.setName("BMW");
    C.price= 1000000;
    C.getName();
    cout<< C.price;
}
