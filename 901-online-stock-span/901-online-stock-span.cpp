class StockSpanner {
public:
    stack<pair<int,int>> s;
    int index;
    StockSpanner() {
        index=-1;
    }
    
    int next(int price) {
        index++;
        int ans=0;
        if(s.size()==0) ans=index-(-1);
        
        else if(s.top().first>price){
            ans=index-s.top().second;
        }
        
        else{
            while(s.size()>0 && s.top().first<=price){
                s.pop();
            }
            if(s.size()==0) ans=index-(-1);
            else ans=index-s.top().second;
        }
        pair<int,int>p1(price,index);
        s.push(p1); 
        return ans;
    }
    
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */