class Solution {
  public:
    bool pairWiseConsecutive(stack<int>& st) {
        // code here
          if (st.size() % 2 != 0) {
              st.pop();
          }
        while (!st.empty() ){
            int n = st.top();
            st.pop();
        
            int m = st.top();
            st.pop();
            
            if (abs(m-n)!=1){
                return false;
            }
        }
      
        return true;
    }
};