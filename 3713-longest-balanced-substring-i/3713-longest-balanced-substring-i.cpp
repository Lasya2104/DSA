class Solution {
public:
    int longestBalanced(string s) {
        int max_len = 1;
        for(int i=0;i<s.size();i++)
        {
            vector<int>frq(26,0);
            int distinct = 0;
            int max_frq = 0;
            for(int j=i;j<s.size();j++)
            {
                int idx = s[j]-'a';
                if(frq[idx] == 0)
                {
                    distinct++;
                }
                frq[idx]++;
                max_frq = max(max_frq,frq[idx]);
                int len = j-i+1;
                if(len == distinct*max_frq)
                {
                    max_len = max(max_len,len);
                }
            }
        }
        return max_len;
    }
};