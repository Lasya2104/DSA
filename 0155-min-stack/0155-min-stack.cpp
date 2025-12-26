class MinStack {
public:
    stack<int>st,minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minStack.empty() || val<=minStack.top())
        {
            minStack.push(val);
        }
    }
    
    void pop() {
        if(st.empty())return;
        if(st.top()==minStack.top())
        {
            minStack.pop();
        }
        st.pop();
    }
    
    int top() {
        if(st.empty())return -1;
        return st.top();
    }
    
    int getMin() {
        if(minStack.empty())return -1;
        return minStack.top();
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