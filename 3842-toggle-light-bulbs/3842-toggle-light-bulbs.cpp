class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>frq;
        for(int i=0;i<bulbs.size();i++)
        {
            frq[bulbs[i]]++;
        }
        vector<int>res;
        for(auto &p:frq)
        {
            if(p.second%2!=0)
            {
                res.push_back(p.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};