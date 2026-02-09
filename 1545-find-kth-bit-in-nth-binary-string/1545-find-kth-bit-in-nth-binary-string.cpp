class Solution {
public:
    string invert(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '0')s[i]='1';
            else s[i]='0';
        }
        return s;
    }
    string build(int n)
    {
        if(n == 1)return "0";
        string prev = build(n-1);
        string rev = prev;
        reverse(rev.begin(),rev.end());
        return prev+="1"+invert(rev);
    }
    char findKthBit(int n, int k) {
        string res = build(n);
        return res[k-1];
    }
};