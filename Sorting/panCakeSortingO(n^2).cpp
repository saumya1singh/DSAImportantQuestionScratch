class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        for(int i=A.size()-1; i>0; --i){
            int maxIndex= max(A, i);
            
            if(maxIndex!=i){
                flip(A, maxIndex);
                flip(A, i);
            }else{
                 return vector<int>{};
            }
        }
        return A;
    }
    
    int max(vector<int>& A, int size){
        int max=0;
        for(int i=0; i<=size;++i){
            if(A[i]>A[max]){
                max= i;
            }
        }
        return max;
    }
    
    void flip(vector<int>& A, int i){
        int s=0;
        int e=i;
        while(s<e){
            int temp= A[s];
            A[s]= A[e];
            A[e]= temp;
            s++;
            e--;
        }
    }
};