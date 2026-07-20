class Solution {
public:
    bool isvowel(char c)
    {
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(isvowel(s[i]) && isvowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isvowel(s[i]) && !isvowel(s[j]))
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};