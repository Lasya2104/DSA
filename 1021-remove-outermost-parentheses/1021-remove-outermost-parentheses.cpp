class Solution {
public:
    string removeOuterParentheses(string s) {
       stack<int>st;
       string ans="";
       int i=0;
       while(i<s.size())
       {
            if(s[i]=='(')
            {
                if(!st.empty())
                {
                    ans+='(';
                }
                st.push(s[i]);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                    ans+=')';
                }
            }
            i++;
       }
       return ans;
    }
};