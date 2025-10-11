bool vowel(char c)
{
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E'
    || c=='I' || c=='O' || c=='U'; 
}
class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        string t(n,'1');
        for(int i=0;i<n;i++)
        {
            if(!vowel(s[i]))
            {
                t[i]=s[i];
            }
        }
        string vow;
        for(int i=0;i<n;i++)
        {
            if(vowel(s[i]))
            {
                vow.push_back(s[i]);
            }
        }
        sort(vow.begin(),vow.end());
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]=='1')
            {
                t[i]=vow[k++];
            }
        }
        return t;
    }
};