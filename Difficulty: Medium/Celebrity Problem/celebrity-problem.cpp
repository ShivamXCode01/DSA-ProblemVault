class Solution {
private:
    bool knows(vector<vector<int>>& mat, int a, int b, int n) {
        return mat[a][b] == 1;
    }

public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();

        stack<int> s;

        // Put everyone into stack
        for (int i = 0; i < n; i++) {
            s.push(i);
        }

        // Find possible candidate
        while (s.size() > 1) {
            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if (knows(mat, a, b, n)) {
                // a knows b → a cannot be celebrity
                s.push(b);
            }
            else {
                // a does not know b → b cannot be celebrity
                s.push(a);
            }
        }

        int candidate = s.top();

        // Check candidate knows nobody
        for (int i = 0; i < n; i++) {
            if (i != candidate && mat[candidate][i] == 1) {
                return -1;
            }
        }

        // Check everyone knows candidate
        for (int i = 0; i < n; i++) {
            if (i != candidate && mat[i][candidate] == 0) {
                return -1;
            }
        }

        return candidate;
    }
};