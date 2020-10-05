

/*********APPROACH 1***********/
//Space - O(1)
//Time- O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int size= nums.size();
        
        //Initially output vector will calculate the left product
        vector<int> output(size);
        output[0]= 1;
        for(int i=1; i<size; ++i){
            output[i]= nums[i-1]*output[i-1];
        }
        
        
        int right= 1;
        for(int i=size-1; i>=0; --i){
            output[i]= output[i]*right;
            right= right*nums[i];
        }
        
        return output;
}




/*********APPROACH 2***********/
//Space - O(n)
//Time- O(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int size= nums.size();
        vector<int> ans(size);

        //array to store the product of all eleements left to it
        vector<int> left(size);
        left[0]= 1;
        for(int i=1; i<size; ++i){
            left[i]= nums[i-1]*left[i-1];
        }

        //array to store teh product of all eleements right to it  
        vector<int> right(size);
        right[size-1]= 1;
        for(int i=size-2; i>=0; --i){
            right[i]= nums[i+1]*right[i+1];
        }
        

        for(int i=0; i<size; ++i){
            ans[i]= left[i]*right[i];
        }
        return ans;
    }
};