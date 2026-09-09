class Solution {
  public:

    vector<int> bracketNumbers(string &s) {
        // code here
        stack<int>st;
        vector<int>ans;
        int cnt = 0;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(') {
                cnt++;
                ans.push_back(cnt);
                st.push(cnt);
                
            }
            else if (ch == ')') {
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};