#include <iostream>
using namespace std;

//Generic Programming using Templates 

template <typename T>
int search(T a[], int size, T key){
    for(int i=0; i<size; ++i){
        if(a[i]==key){
            return i;
        }
    }
    return size;
}

int main() {
    cout<< "Understanding Templates"<< endl;
    int a[]= {3, 7, 9, 5, 2};
    int size= sizeof(a)/sizeof(int);
    int key= 5;
    cout<<"Passing Int in Templates: "<< search(a, size, key)<< endl;

    float b[]= {7.89, 9.1, 6.74, 3.45, 2,65};
    int sizeb= sizeof(b)/sizeof(int);
    float keyb= 9.1;

    cout<<"Passing Float in Templates: "<<search(b, sizeb, keyb)<< endl;
}
