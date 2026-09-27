class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frq;

        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }

        vector<pair<int,int>> s;

        for(auto &p:frq)
        {
            s.push_back({p.first,p.second});
        }

        sort(s.begin(),s.end(),[](auto &a, auto &b){
            return a.second > b.second;
        });

        vector<int> res;

        for(int i=0;i<k;i++)
        {
            res.push_back(s[i].first);
        }

        return res;
    }
};