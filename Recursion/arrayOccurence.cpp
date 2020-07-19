#include <iostream>
using namespace std;

//Find all occurences of a particular element in array
//Return Array

int* findArray(int a[], int size, int target, int ans[], int i, int j){
    if(i==size){
        return ans;
    }

    if(a[i]==target){
        ans[j]= i;
        return findArray(a, size, target, ans, i+1, j+1);
    }
        return findArray(a, size, target, ans, i+1, j);
}


int main() {
    int a[] = {4, 3, 2, 6, 2, 2, 5};

    int ans[]= {0};
    int *value= findArray(a, 7, 2, ans, 0, 0);
    
    for(int i=0; i<3; ++i){
        cout<< value[i]<<" ";
    }
}
