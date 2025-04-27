class MinStack {
public:
        stack<int> stk , minStk ; 
    MinStack() {
    }
    
    void push(int val) {
        if(stk.empty())
             minStk.push(val);
        else{
            int tmp = val; 
            minStk.top() > val ? minStk.push(val) : minStk.push(minStk.top()); 
        }
         stk.push(val);
    }
    
    void pop() {
        minStk.pop();
        stk.pop();
    }
    
    int top() {
        return stk.top() ; 
    }
    
    int getMin() {
        return minStk.top();
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