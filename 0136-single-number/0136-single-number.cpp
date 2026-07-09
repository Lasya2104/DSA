class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>frq;
        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }
        int res=0;
        for(auto p:frq)
        {
            if(p.second==1)res=p.first;
        }
        return res;
    }
};