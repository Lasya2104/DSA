class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>res;
        while(ss>>word)
        {
            res.push_back(word);
        }
        reverse(res.begin(),res.end());
        string ans="";
        for(int i=0;i<res.size();i++)
        {
            if(i!=res.size()-1)
            {
                ans+=res[i]+" ";
            }
            else
            {
                ans+=res[i];
            }
        }
        return ans;
    }
};