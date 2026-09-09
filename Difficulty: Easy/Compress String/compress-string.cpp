class Solution {
public:
    string compressString(string &s) {
        string ans = "";
        int n = s.length();

        for (int i = 0; i < n; ) {
            char ch = tolower(s[i]);
            int cnt = 0;

            while (i < n && tolower(s[i]) == ch) {
                cnt++;
                i++;
            }

            ans += ch;
            ans += to_string(cnt);
        }

        return ans;
    }
};