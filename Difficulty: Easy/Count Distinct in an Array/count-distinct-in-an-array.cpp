class Solution {
  public:
    int countDistinct(vector<int>& arr) {
        // code here
        set<int>s;
        
        for (int num : arr){
            s.insert(num);
        }
        
        return s.size();
    }
};