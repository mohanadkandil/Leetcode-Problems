class MyQueue {
public:
    
    stack<int> a,b;
    MyQueue() {
        
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        if (a.empty() && b.empty()) return -1;
        while (b.empty()) {
            while(!a.empty()) {
                b.push(a.top());
                a.pop();
            }
        }
        int x = b.top();
        b.pop();
        return x;
        
    }
    
    int peek() {
        if (!b.empty()) {
            return b.top();
        }else {
            while(!a.empty()) {
                int val = a.top();
                b.push(val);
                a.pop();
            }
            return b.top();
        }
        
    }
    
    bool empty() {
        if (a.empty() && b.empty()) 
            return true;
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */