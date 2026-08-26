class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0,r=0;
        string res="";
        int cnt=0;
        while(r<s.size())
        {
            if(s[r]=='1')
            {
                cnt++;
            }
            r++;
            while(cnt>k)
            {
                if(s[l]=='1')
                {
                    cnt--;
                }
                l++;
            }
            if(cnt==k)
            {
                while(s[l]=='0')
                {
                    l++;
                }
                string st=s.substr(l,r-l);
                if(res=="" || st.size()<res.size())
                {
                    res=st;
                }
                else if(st.size()==res.size())
                {
                    res=min(res,st);
                }
            }
        }
        return res;
    }
};