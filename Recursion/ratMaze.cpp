#include<iostream>
using namespace std;

// rat in maze problem Hackerblocks
// Recursion + Backtracking

bool ratMaze(char a[][1005], int sol[1005][1005], int i, int j, int m, int n){
	//base
	if(i==m && j==n){
		sol[i][j]= 1;
		//print the path
		for(int i=1; i<=m; ++i){
			for(int j=1; j<=n; ++j){
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	//rat should be inside maze
	if(i>m || j>n){
		return false;
	}

	//if cross encountered
	if(a[i][j]=='X'){
		return false;
	}

	//assume taht current elemnt is true
	sol[i][j]= 1;

	bool right= ratMaze(a, sol, i, j+1, m, n);
    if(right){
        return true;
    }
	bool down= ratMaze(a, sol,  i+1, j, m, n);
    if(down){
        return true;
    }

	//backtracking
	sol[i][j]=0;
	
	return false;
}

int main() {
	int m,n;
	cin>> m>>n;

	char a[1005][1005];
	int sol[1005][1005]={0};
	for(int i=1; i<=m; ++i){
		for(int j=1; j<=n; ++j){
			cin>> a[i][j];
		}
	}
	bool ans= ratMaze(a, sol, 1, 1, m, n);
	if(ans== false){
		cout<< -1;
	}
	return 0;
}