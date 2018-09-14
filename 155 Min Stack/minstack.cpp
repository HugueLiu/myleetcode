class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        int_v_.push_back(x);
    }
    
    void pop() {
        int_v_.pop_back();
    }
    
    int top() {
        return int_v_.back();
    }
    
    int getMin() {
        min_x_ = 2147483647;
        for(int i = 0; i < int_v_.size(); i++) {
            if(int_v_[i] < min_x_) min_x_ = int_v_[i];
        }
        return min_x_;
    }
    
public:
    vector<int> int_v_;
    int min_x_;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
