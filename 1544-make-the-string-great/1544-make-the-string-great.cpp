class Solution {
public:
    string makeGood(string s) {
        
        string res = "";
        
        for (char c : s) {
            if (!res.empty() && abs(res.back() - c) == 32) {
                res.pop_back(); // Remove the matching character
            } else {
                res.push_back(c); // Add the current character
            }
        }
        
        return res;
    }
};