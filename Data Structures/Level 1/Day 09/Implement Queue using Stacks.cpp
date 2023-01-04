class MyQueue {
public:
    stack<int> st;
    stack<int> temp;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        int t = temp.top();
        temp.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return t;
    }
    
    int peek() {
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        int t = temp.top();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return t;
    }
    
    bool empty() {
        return st.empty();
    }
};
