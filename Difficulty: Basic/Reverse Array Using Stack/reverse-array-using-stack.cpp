class Solution {

  public:
    void reverseArray(vector<int>& arr) {
        // code here
      stack<int> st;

          for (int x : arr) {
              st.push(x);
          }

          int i = 0;

          while (!st.empty()) {
              arr[i] = st.top();
              st.pop();
              i++;
          }
      }
};