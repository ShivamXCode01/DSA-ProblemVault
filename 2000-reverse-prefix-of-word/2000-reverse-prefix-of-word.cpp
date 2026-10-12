class Solution {
public:
    string reversePrefix(string word, char ch) {
       stack<char> st;
        size_t index = 0;
        bool found = false;

        // 1. Push characters onto the stack until we find 'ch'
        for (size_t i = 0; i < word.length(); ++i) {
            st.push(word[i]);
            if (word[i] == ch) {
                index = i;
                found = true;
                break;
            }
        }

      
        if (!found) {
            return word;
        }

       
        for (size_t i = 0; i <= index; ++i) {
            word[i] = st.top();
            st.pop();
        }

        return word;
    }
};