/*

	Problem Link: https://leetcode.com/problems/kth-largest-element-in-a-stream/

*/

class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>q; //creating a min heap
    int size;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(auto num: nums){
            q.push(num);
            if(q.size() > k)
              q.pop();
        }
    }
    
    int add(int val) {
       q.push(val); 
        if(q.size() > size)
            q.pop();
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
