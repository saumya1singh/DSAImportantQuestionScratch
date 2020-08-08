
//LeetCode Sliding Window

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int size= nums.size();
        //default size of Deque is k
        deque<int> Q(k);
        vector<int> ans;
        if(size < k){
            return ans;
        }
        //First Let's Process first k elements i.e 1, 3, -1
        int i;
        for(i=0; i<k; ++i){
            while(!Q.empty()  &&  nums[i]>nums[Q.back()]){
                Q.pop_back();
            }
            Q.push_back(i);
        }        
        ans.push_back(nums[Q.front()]);
        //Now Let's process the remaining elements 
        for(; i<size; ++i){
            //Remove the elements that are not in the current window, IMP to understand
            while(!Q.empty()  &&  Q.front()<=i-k){
                Q.pop_front();
            }            
            //Remove the elemnt that are not useful but inside the current window
            while(!Q.empty()  &&  nums[i]>=nums[Q.back()]){
                Q.pop_back();
            }
            
            //Add new element 
            Q.push_back(i);
            ans.push_back(nums[Q.front()]); 
        }        
        return ans;        
    }
};