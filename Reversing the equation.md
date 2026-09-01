## 01. Reversing the equation

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/reversing-the-equation2205/1)

### Problem Description

**Task:** Given a mathematical equation that contains only numbers and +, -, *, /. Print the equation in reverse, such that the equation is reversed, but the numbers remain the same.It is guaranteed that the given equation is valid, and there are no leading zeros.
Example 1:

#### Examples

##### Example 1

- **Output:**
```text
2*5+3-20
```
- **Explanation:** The equation is reversed with numbers remaining the same. Example 2:

##### Example 2

- **Output:**
```text
4/2-56*2+5
```
- **Explanation:** The equation is reversed with numbers remaining the same. Your Task:You don't need to read input or print anything. Your task is to complete the function reverseEqn() which takes the string S representing the equation as input and returns the resultant string representing the equation in reverse. Expected Time Complexity: O(|S|).Expected Auxiliary Space: O(|S|).

#### Constraints

- **1.** `1 <= |S| <= 10⁵The string contains only the characters '0' - '9', '+', '-', '*', and '/'.`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** Not found
- **Expected Auxiliary Space Complexity:** Not found

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-09-02 00:08:46
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
public:
    string reverseEqn(string s) {

        stack<string> st;
        string temp = "";

        for (char ch : s) {

            if (isdigit(ch)) {
                temp += ch;
            }
            else {
                // Push complete number
                st.push(temp);
                temp = "";

                // Push operator
                string op(1, ch);
                st.push(op);
            }
        }

        // Push last number
        if (!temp.empty()) {
            st.push(temp);
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-09-02 00:00:35
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
public:
    string reverseEqn(string s) {

        stack<string> st;
        string temp = "";

        for (char ch : s) {

            if (isdigit(ch)) {
                temp += ch;
            }
            else {
                // Push complete number
                st.push(temp);
                temp = "";

                // Push operator
                string op(1, ch);
                st.push(op);
            }
        }

        // Push last number
        if (!temp.empty()) {
            st.push(temp);
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
```

*Generated on: 02/09/2026, 00:10:00*