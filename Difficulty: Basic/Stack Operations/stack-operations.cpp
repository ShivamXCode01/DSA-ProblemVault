class myStack {
  private:
    // Define your stack
    stack<int> st;
  public:
    void push(int x) {
        // insert x into stack
        st.push(x);
    }

    void pop() {
        // remove top ele from stack
        if(!st.empty()){
            st.pop();
        }
    }

    int peek() {
        // return top of stack
        if(!st.empty()){
            return st.top();
        }
    }

    int getSize() {
        // return current size of stack
        return st.size();
    }

    bool isEmpty() {
        // check whether stack is empty
        return st.size() == 0;
    }
};