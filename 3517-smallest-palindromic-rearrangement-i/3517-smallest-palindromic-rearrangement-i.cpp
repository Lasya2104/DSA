class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1)return s;
        map<char,int>frq;
        for(int i=0;i<s.size();i++)
        {
            frq[s[i]]++;
        }
        char c;
        int flag=0;
        string mid="";
        string res="";
        for(auto &p:frq)
        {
            if(p.second%2!=0)
            {
                mid+=p.first;
            }
            int n=p.second;
            int x=n/2;
            while(x!=0)
            {
                res+=p.first;
                x--;
            }
        }
        string ans=res;
        reverse(ans.begin(),ans.end());
        res+=mid;
        res+=ans;
        return res;
    }
};