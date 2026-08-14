class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,r=0;
        int max_len=INT_MIN;
        map<char,int>mp;
        for(char ch='a';ch<='z';ch++)
        {
            mp[ch]=1;
        }
        while(l<=r && r<s.size())
        {
            if(mp[s[r]]<=2)
            {
                mp[s[r]]++;
                max_len=max(max_len,r-l+1);
                r++;
            }
            else
            {
                mp[s[l]]--;
                l++;
            }
        }
        return max_len;
    }
};