class MinStack {
public:
    
    stack<long long> s;
    long long min;
    MinStack() {
        min=0;
    }
    
    void push(long long val) {
        if(s.size()==0){
            s.push(val);
            min=val;
        }
        else if(val>=min){
            s.push(val);
        }
        else{
            s.push(2*val-min);
            min=val;
        }
    }
    
    void pop() {
        if(s.size()==0) return;
        
        else if(s.top()<min){
            min=2*min-s.top();
            s.pop();
        }
        else{
            s.pop();
        }
    }
    
    long long top() {
        if(s.size()==0) return -1;
        
        if(s.top()<min) return min;
        return s.top();
    }
    
    long long getMin() {
         if(s.size()==0) return -1;
         
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */