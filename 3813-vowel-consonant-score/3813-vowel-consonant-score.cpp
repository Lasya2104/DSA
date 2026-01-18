class Solution {
public:
    int vowelConsonantScore(string s) {
        int vcnt=0,ocnt=0,dcnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                vcnt++;
            }
            else if(s[i]>='0' && s[i]<='9' || s[i]==' ')
            {
                dcnt++;
            }
            else
            {
                ocnt++;
            }
        }
        if(ocnt>0)
        {
            return floor(vcnt/ocnt);
        }
        else
        {
            return 0;
        }
    }
};