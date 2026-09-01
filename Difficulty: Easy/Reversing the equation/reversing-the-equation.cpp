class Solution {
public:
    string reverseEqn(string s) {

        stack<string> st;
        string temp = "";

        for (char ch : s) {

            if (isdigit(ch)) {
                temp += ch;
            }
            else {
                // Push complete number
                st.push(temp);
                temp = "";

                // Push operator
                string op(1, ch);
                st.push(op);
            }
        }

        // Push last number
        if (!temp.empty()) {
            st.push(temp);
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};