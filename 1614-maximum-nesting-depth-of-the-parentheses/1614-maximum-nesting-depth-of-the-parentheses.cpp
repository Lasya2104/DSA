class Solution {
public:
    int maxDepth(string s) {
        int max_cnt=INT_MIN;
        stack<int>st;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                cnt+=1;
            }
            else if(!st.empty() && s[i]==')' && st.top()=='(')
            {
                st.pop();
                cnt-=1;
            }
            max_cnt=max(max_cnt,cnt);
        }
        return max_cnt;
    }
};