int helper(const string s, int i, long long num, int sign)
{
    const int min_val = INT_MIN;
    const int max_val = INT_MAX;
    if(i>=s.size() || !isdigit(s[i]))
    {
        return (int)(sign*num);
    }
    num = num*10+(s[i]-'0');
    if(num*sign <= min_val)return min_val;
    if(num*sign >= max_val)return max_val;
    return helper(s,i+1,num,sign);
}
int myatoi(string s, int i=0)
{
    while(i<=s.size() && s[i]==' ')i++;
    int sign = 1;
    if(i<s.size() && (s[i]=='+' || s[i]=='-'))
    {
        sign = (s[i]=='-')?-1:1;
        i++;
    }
    return helper(s,i,0,sign);
}
class Solution {
public:
    int myAtoi(string s) {
        return myatoi(s);
    }
};