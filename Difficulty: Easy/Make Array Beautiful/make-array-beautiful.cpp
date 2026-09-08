class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int> s;

        for (int i = 0; i < arr.size(); i++) {
            if (!s.empty() && 
                ((s.top() >= 0 && arr[i] < 0) || 
                 (s.top() < 0 && arr[i] >= 0))) {

                s.pop();
            }
            else {
                s.push(arr[i]);
            }
        }

        vector<int> ans;

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};