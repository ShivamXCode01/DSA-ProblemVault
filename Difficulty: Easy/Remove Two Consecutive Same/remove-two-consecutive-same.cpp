class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // code here
        stack<string>st;
        int n = arr.size();
        for (int i = 0 ; i < n ; i++){
           
           if (!st.empty() && st.top() == arr[i]){
               st.pop();
           }
           else{
               st.push(arr[i]);
           }
       }
       return st.size();
    }
};