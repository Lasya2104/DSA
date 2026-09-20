class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>frq;
        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }
        int ans=0;
        for(auto &p:frq)
        {
            if(p.second>(nums.size()/2))
            {
                ans=p.first;
            }
        }
        return ans;
    }
};