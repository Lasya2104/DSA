class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        string ans="";
        vector<int>frq;
        for(auto &p:mp)
        {
            frq.push_back(p.second);
        }
        sort(frq.rbegin(),frq.rend());
        for(int i=0;i<frq.size();i++)
        {
            for(auto &p:mp)
            {
                if(frq[i]==p.second)
                {
                    while(p.second>0)
                    {
                        ans+=p.first;
                        p.second--;
                    }
                }
            }
        }
        return ans;
    }
};