class StockSpanner {
public:
    stack<pair<int, int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(s.size()==0){
            s.push({price, 1});
            return 1;
        }
        
        int ans=1;
        while(!s.empty() and s.top().first<=price){
            ans +=  s.top().second;
            s.pop();
        }
        s.push(make_pair(price, ans));
        return ans;        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */