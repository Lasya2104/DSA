class Solution {
public:
    string trimTrailingVowels(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
        }
        while(!st.empty())
        {
            if(st.top() == 'a' || st.top() == 'e' || st.top() == 'i' || st.top() == 'o' || st.top() == 'u')
            {
                st.pop();
            }
            else
            {
                break;
            }
        }
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }

};