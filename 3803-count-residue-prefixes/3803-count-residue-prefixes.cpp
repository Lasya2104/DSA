class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char>st;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
            int distinct=st.size();
            int length=i+1;
            if(distinct==length%3)
            {
                cnt++;
            }
        }
        return cnt;
    }
};