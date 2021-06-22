/*

Problem Link: https://practice.geeksforgeeks.org/problems/subset-sums2234/1

*/

class Solution
{
public:
    void func(int ind,int sum,vector<int>&a,int n,vector<int>&sumSubset){
        if(ind == n){
            sumSubset.push_back(sum);
            return;
        }
        //pick the element
        func(ind+1,sum+a[ind],a,n,sumSubset);
        
        //not picking the element
        func(ind+1,sum,a,n,sumSubset);
    }
public:
    vector<int> subsetSums(vector<int> a, int n){
        vector<int>sumSubset;
        func(0,0,a,n,sumSubset);
        sort(sumSubset.begin(),sumSubset.end());
        return sumSubset;
    }
};

