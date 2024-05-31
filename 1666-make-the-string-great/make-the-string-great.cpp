class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for (auto& ch : s) {
            if (!st.empty() && ch != st.top() &&
                (toupper(ch) == st.top() || ch == toupper(st.top())))
                st.pop();
            else
                st.push(ch);
        }
        string output = "";
        while (!st.empty()) {
            output = st.top() + output;
            st.pop();
        }
        return output;
    }
};