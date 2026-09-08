class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")return 0;
        int max_len=INT_MIN;
        int l=0,r=0;
        unordered_map<char,int>mp;
        while(l<=r && r<s.size())
        {
            mp[s[r]]++;
            if(mp[s[r]]==1)
            {
                max_len=max(max_len,r-l+1);
                r++;
            }
            else if(mp[s[r]]>1)
            {
                mp[s[r]]--;
                mp[s[l]]-=1;
                l++;
            }
        }
        return max_len;
    }
};