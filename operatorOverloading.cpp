#include <iostream>
using namespace std;

//Operator Overloading Concept 

class Complex{

    private:
    int real;
    int img;

    public:
    Complex(int r, int i){
        real= r;
        img= i;
    }

    void print(){
        cout<< real<< " + "<< img<<"i";
        cout<< endl;
    }

    void add(Complex &x){
        real += x.real;
        img += x.img;
    }

    //Operator Overloading
    void operator+(Complex &x){
        real += x.real;
        img += x.img;
    }

    int operator[](string s){
        if(s=="img"){
            return img;
        }
        else{
            return real;
        }
    }

};

int main() {
    Complex C1(4,7);
    Complex C2(2,3);
    
    C1.print();
    C2.print();

    //C1.add(C2);
    
    cout<< C1["img"];
    cout<< endl;
    
    C1 + C2;
    C1.print();
    C2.print();

}
