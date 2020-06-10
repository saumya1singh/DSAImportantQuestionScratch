#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Car Sorting Problem by saumya singh
//While ordering a cab i have to find dist of all nearby cabs from origin
//Approach 2- Vectors + Custom Classes + Strings

class Car{
    public:
    string car_name;
    int x;
    int y;

    Car(){

    }

    Car(string name, int x, int y){
        car_name= name;
        this->x=x;
        this->y=y;
    }

    int dist(){
        return x*x+y*y;
    }
};

bool compare(Car A, Car B){
    int d1= A.dist();
    int d2= B.dist();

    if(d1==d2){
        return A.car_name<B.car_name;
    }
    return d1<d2;
}

int main() {

    int n;
    cin>>n;

   
    vector<Car> v;

    for(int i=0;i<n;++i){
        string name;
        cin>>name;
        int x,y;
        cin>>x>>y;
        Car test(name,x,y);
        v.push_back(test);
    }
    sort(v.begin(), v.end(), compare);

    for(auto c:v){
        cout<<c.car_name<<" "<<c.x<<" "<<c.y<<endl;
    }
   
}
