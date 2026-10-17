class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";
        for (char c : s) {
            // If the current character matches the last added character, remove it
            if (!res.empty() && res.back() == c) {
                res.pop_back();
            } else {
                // Otherwise, add the character to our result stack
                res.push_back(c);
            }
        }
        return res;
    }
};