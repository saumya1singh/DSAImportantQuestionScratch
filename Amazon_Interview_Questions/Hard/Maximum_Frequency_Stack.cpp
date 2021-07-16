/*

Problem Link: https://leetcode.com/problems/maximum-frequency-stack/

*/

class FreqStack {
public:
    FreqStack() {
        
    }
    unordered_map<int,int>freq;
    unordered_map<int,stack<int>>m;
    int maxfreq = 0;
    
    void push(int val) {
        maxfreq = max(maxfreq, ++freq[val]);
        m[freq[val]].push(val);
    }
    
    int pop() {
        int x = m[maxfreq].top();
        m[maxfreq].pop();
        if(!m[freq[x]--].size()) maxfreq--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
