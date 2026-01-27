class Solution {
public:
    void fun(int idx, int k, string &s, char &res)
    {
        if(s.size() > k)
        {
            res = s[k-1];
            return;
        }
        string dup="";
        for(int i=0;i<s.size();i++)
        {
            dup.push_back(s[i]+1);
        }
        s+=dup;
        fun(idx+1,k,s,res);
    }
    char kthCharacter(int k) {
        string s="a";
        char res='a';
        fun(0,k,s,res);
        return res;
    }
};