#include<iostream>
using namespace std;

void move(int noOfDisk, char source, char helper, char destination){
	//Base
	if(noOfDisk==0){
		return;
	}

	//move n-1 disks from A to C
	move(noOfDisk-1, source, destination, helper);

	//shift nth disk from A to B
	cout<< "Moving ring "<< noOfDisk << " from "<<source<< " to "<< destination<<endl;

	//move n-1 disks from C to B
	move(noOfDisk-1, helper, source, destination);
}
int main() {
	int noOfDisk;
	cin>> noOfDisk;

	move(noOfDisk, 'A', 'C', 'B');
	return 0;
}