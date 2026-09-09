class Solution {
public:
    bool checkRedundancy(string &s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(' || ch == '+' || ch == '-' || 
                ch == '*' || ch == '/') {
                st.push(ch);
            }
            else if (ch == ')') {

                bool hasOperator = false;

                while (!st.empty() && st.top() != '(') {
                    char top = st.top();

                    if (top == '+' || top == '-' || 
                        top == '*' || top == '/') {
                        hasOperator = true;
                    }

                    st.pop();
                }

                
                if (!st.empty()) {
                    st.pop();
                }

                
                if (!hasOperator) {
                    return true;
                }
            }
        }

        return false;
    }
};
