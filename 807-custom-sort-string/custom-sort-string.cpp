class Solution {
public:
    string customSortString(string order, string s) {
        string result="";
        for(auto ch:order)
        {
            if(s.find(ch) != string::npos)
            {
                int occ=count(s.begin(), s.end(), ch);
                if(occ>1)
                {
                    for(int i=0;i<occ;i++)
                    {
                        result+=ch;
                    }
                }
                else
                {    
                    result+=ch;
                }
            }
        }
        for(auto ch1:s)
        {
            if(order.find(ch1) == string::npos)
            {
                result+=ch1;
            }
        }
        return result;
    }
};