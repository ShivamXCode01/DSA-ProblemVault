class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1 ;
        set<int>s2;

        for (int num : nums1){
            s1.insert(num);
        }

        for (int num : nums2){
            s2.insert(num);
        }

        vector<int> ans ;
        for (int num : s1){
            if (s2.contains(num)){
                ans.push_back(num);
            }
        }

        return ans ; 

    }
};