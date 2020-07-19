#include<iostream>
using namespace std;
#define ll long 
//Sort array using Quick Sort
// Find Pivot element and place it at correct position using a function
// Repeat for left half and right half of pivot 

int partition(ll a[], ll start, ll end){
	//Choose last element as Pivot
	ll i= start-1;
	ll pivot= a[end];

	for(ll j= start; j<=end-1; ){
		if(a[j]<pivot){
			//Region 1- Before Pivot
			i++;
			swap(a[i], a[j]);
		}
			//Expand Region 2- After Pivot
			j++;		
	}
	//Pivot at final position
	swap(a[i+1], a[end]);
	return i+1;
}


void quickSort(ll a[], ll start, ll end){
	//Base
	if(start>=end){
		//only 1 or 0 element in array
		return;
	}

	//Find Pivot
	ll pivot= partition(a, start, end);

	//Repeat for left half
	quickSort(a, start, pivot-1);
	//Repeat for right half
	quickSort(a, pivot+1, end);
}



int main() {
	ll size;
	cin>> size;

	ll a[size];
	for(ll i=0; i<size; ++i){
		cin>> a[i];
	}

	quickSort(a, 0, size-1);

	for(ll i=0; i<size; ++i){
		cout<< a[i]<<" ";
	}
	return 0;
}