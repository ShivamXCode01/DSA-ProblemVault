#include <set>
class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        set<int>s1 ;
        set<int>s2;

        for (int num : a){
            s1.insert(num);
        }

        for (int num : b){
            s2.insert(num);
        }

        vector<int> ans ;
        for (int num : s1){
            if (s2.find(num) != s2.end()){
                ans.push_back(num);
            }
        }

    return ans ; 

    }
};