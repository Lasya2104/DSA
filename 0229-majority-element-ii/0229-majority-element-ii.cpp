class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>frq;
        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }
        vector<int>res;
        for(auto &p:frq)
        {
            if(p.second>(nums.size())/3)
            {
                res.push_back(p.first);
            }
        }
        return res;
    }
};