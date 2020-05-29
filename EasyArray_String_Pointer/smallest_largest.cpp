#include <iostream>
#include<climits>
using namespace std;

//Program to find the smallest and largest number in array 
int main(){
	int n, a[1000];
	int smallest=INT_MAX;
	int largest=INT_MIN;
	cin>>n;

	for(int i=0;i<n;++i){
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if(a[i]<smallest)
		{	
			smallest=a[i];
		}
		else if(a[i]>largest)
		{
			largest=a[i];
		
}	}


	cout<<"Result is:" << smallest << " " << largest<< endl;
	return 0;
}