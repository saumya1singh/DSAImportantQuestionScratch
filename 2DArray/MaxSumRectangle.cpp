#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* Write a program to find maximum sum rectangle in give 2D matrix.
 * Assume there is at least one positive number in the 2D matrix.
 * 

 *https://hack.codingblocks.com/app/dcb/337
 * Solution:
 * Keep temp array with size as number of rows. Start left and right from 0
 * and keep adding values for each row and maintain them in this temp array.
 * Run Kadane's algorithm to find max sum subarray in temp. Now increment right by
 * 1. When right reaches last column reset right to 1 and left to 1.
 * 
 * Space complexity of this algorithm is O(row)
 * Time complexity of this algorithm is O(row*col*col)
 */ 


int kadane(int a[], int size){
	int maxEndsHere=0;
	int maxSum=INT_MIN;
    int maxElement=INT_MIN;
    
    bool atleastOnePositive=false;
    for(int i=0;i<size;i++){
        maxElement = max(maxElement,a[i]);
        if(a[i]>=0){
            atleastOnePositive=true;
            break;
        }
    }
    if(!atleastOnePositive){
        return maxElement;
    }

	for(int i=0; i<size; ++i){
		maxEndsHere= maxEndsHere+a[i];

		if(maxEndsHere<0){
			maxEndsHere= 0;
		}

		if(maxEndsHere>maxSum){
			maxSum= maxEndsHere;
		}
	}
	return maxSum;
}



int findMaxSum(int row, int col, int a[][100]){

	int maxSum= INT_MIN;
	int sum;
	int temp[row]={0};

	for(int left=0; left<col; ++left){   
        memset(temp,0,sizeof(temp));
		for(int right=left; right<col; ++right){
			for(int i=0; i<row; ++i){
				temp[i]= temp[i] + a[i][right];
			}
            sum= kadane(temp, row);

            if(sum > maxSum){
                maxSum= sum;
            }
		}
	}	
	return maxSum;
}




int main() {
	int tc;
	cin>> tc;

	while(tc--){
		int row, col;
		cin>> row>> col;

		int a[row][100];

		for(int i= 0; i<row; ++i){
			for(int j=0; j<col; ++j){
				cin>>a[i][j];
			}
		}

		cout<< findMaxSum(row, col, a)<< endl;
	}
	return 0;
}