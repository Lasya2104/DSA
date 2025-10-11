bool isvowel(char c)
{
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||    c=='I' || c=='O' || c=='U';
}
class Solution {
public:
    bool doesAliceWin(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i]))cnt++;
        }
        if(cnt>=1)return true;
        else return false;
    }
};