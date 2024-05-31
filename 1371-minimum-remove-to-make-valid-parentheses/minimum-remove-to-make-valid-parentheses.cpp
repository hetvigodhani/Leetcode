
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        string result="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')' && st.empty())
                continue;
            
            if(s[i]=='(')
                st.push(result.size());
            else if(s[i]==')' && !st.empty())
                st.pop();
            result+=s[i];
        }
        
        while(!st.empty())
        {
            int r=st.top();
            result=result.substr(0,r) + result.substr(r+1);
            st.pop();
        }
        return result;
    }
};