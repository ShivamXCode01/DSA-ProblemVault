class Solution {
  private:
  int solve (stack<int>st , int cnt , int n ){
      if (cnt == n/2){
          int t = st.top();
          return t ;
      }
      st.pop();
      return solve(st,cnt+1 , n );
  }
  public:
    int stackMiddle(stack<int>& st) {
        // code here
        int cnt = 0 ;
        int n = st.size();
        int ans = solve (st,cnt,n);
        return ans ;
    }
};