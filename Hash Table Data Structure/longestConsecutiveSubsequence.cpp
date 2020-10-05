#include <bits/stdc++.h>
using namespace std;

//Longest Consecutive Subsequence in a given array
/*Input: arr[] = {1, 9, 3, 10, 4, 20, 2}
Output: 4
Explanation: 
The subsequence 1, 3, 4, 2 is the longest 
subsequence of consecutive elements

Input: arr[] = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42}
Output: 5
Explanation: 
The subsequence 36, 35, 33, 34, 32 is the longest 
subsequence of consecutive elements.*/

int longestConsecutiveSubsequence(int n, int a[]){
    set<int> s;
    int ans=0;
    //store all elements in set
    for(int i=0; i<n; ++i){
        s.insert(a[i]);
    }
    //Try to find potential left boundary, if arr[i]-1 exists that means arr[i] cann't be the potential left bound 
    //On finding left boundary, traverse throught it till rught end is not reached
    for(int i=0; i<n; ++i){
        if(s.find(a[i]-1) != s.end()){
            continue;
        }else{
            int x= a[i];
            int count= 0;
            while(s.find(x) != s.end()){
                count++;
                x++;
            }
            ans= max(ans, count);
        }
    }
    return ans;
}

int main() {
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>> a[i];
    }
    cout<< longestConsecutiveSubsequence(n, a);
}
