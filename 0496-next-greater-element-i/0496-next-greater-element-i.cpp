class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int> st;
       unordered_map<int, int> nextGreaterMap;

       
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nextGreaterMap[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        vector<int> result;
        for (int num : nums1) {
            if (nextGreaterMap.count(num)) {
                result.push_back(nextGreaterMap[num]);
            } else {
                result.push_back(-1);
            }
        }

        return result;
    }

};