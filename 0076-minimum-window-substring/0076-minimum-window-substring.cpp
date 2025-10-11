class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(),m=t.size(),l=0,r=0,minlen=INT_MAX,cnt=0,hash[256]={0},index=-1;
        for(int i=0;i<m;i++)
        {
            hash[t[i]]++;
        }
        while(r<n)
        {
            if(hash[s[r]]>0)
            {
                cnt+=1;
            }
            hash[s[r]]--;
            while(cnt==m)
            {
                if((r-l+1)<minlen)
                {
                    minlen=r-l+1;
                    index=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0)cnt-=1;
                l++;
            }
            r+=1;
        }
        return index==-1?"":s.substr(index,minlen);
    }
};