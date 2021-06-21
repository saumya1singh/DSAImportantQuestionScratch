/*

	Problem Link: https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

*/

int maxLen(int a[], int n){
    unordered_map<int,int>m;
    int result =0 ;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
        if(sum==0){
            result = i+1;
        }
        else{
            if(m.find(sum) != m.end()){
                result = max(result, i-m[sum]);
            }
            else
                m[sum] = i;
        }
    }
    return result;
}

