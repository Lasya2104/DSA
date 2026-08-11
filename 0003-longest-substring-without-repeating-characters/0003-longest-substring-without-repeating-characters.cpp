class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int maxi=0;
        map<char,int>mp;
        for(char c = 'a'; c <= 'z'; c++)
            mp[c] = 0;
        while(r<s.size())
        {
            if(mp[s[r]]==0)
            {
                mp[s[r]]=1;
                maxi=max(maxi,r-l+1);
                r++;
            }
            else
            {
                mp[s[l]]=0;
                l++;
            }
        }
        return maxi;
    }
};