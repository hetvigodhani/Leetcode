class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxC=0;
        int cnt=0;
        for(auto str:s)
        {
            if(str=='(')
            {    
                st.push('(');
                cnt++;
                maxC=max(maxC,cnt);
            }
            if(str==')')
            {    
                st.pop();
                cnt--;
            }
        }
        return maxC;
    }
};