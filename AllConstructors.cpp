#include <iostream>
using namespace std;


//All types of constructors

class Car{
    string name;
    int price;

    public:
    //Default Constructor called
    Car(){
        cout<< "Inside Default Constructor"<< endl;
    }

    //Parameterized Constructor
    Car(string s, int p){
        name= s;
        price= p;
    }


    //Copy Constructor
    Car(Car &X){
        name= X.name;
        price= X.price;
    }

    void print(){
        cout<< "Name: "<< name<< endl;
        cout<< "Price: "<< price<< endl;
    }

};

int main() {
    //Default Called
    Car A;


    //Parametrized Called
    Car B("Audi", 50000);
    B.print();

    //Copy Called
    Car C= B;
    C.print();

}
