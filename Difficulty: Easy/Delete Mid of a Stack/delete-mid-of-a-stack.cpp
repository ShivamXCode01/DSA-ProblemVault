class Solution {
  private:
    void solve (stack<int> &s , int cnt , int n ){
      if (cnt == n / 2){
          s.pop();
          return;
      }
      int num = s.top();
      s.pop();
      solve (s,cnt+1,n);
      s.push(num);
    
  }
  public:
    void deleteMid(stack<int>& s) {
        // code here
        int cnt = 0 ;
        int n = s.size();
        solve(s,cnt,n);
    }
};