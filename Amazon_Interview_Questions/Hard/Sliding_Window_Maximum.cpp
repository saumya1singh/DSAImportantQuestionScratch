/*

Problem Link: https://leetcode.com/problems/sliding-window-maximum/

*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>heap; // max heap to find maximum in a sliding window
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            while(!heap.empty() && heap.top().second <= (i-k))
                heap.pop(); //pop the root (max element), if it is out of sliding window.
            heap.push(make_pair(nums[i],i)); //push current element along with its index into the heap
            if(i >= k-1)
                ans.push_back(heap.top().first); //store maax in the windowif we have a valid window (based on size k)
        }
        return ans;
    }
};
