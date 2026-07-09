class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int>frq;
        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }
        int res=0;
        for(auto p:frq)
        {
            if(p.second>n)res=p.first;
        }
        return res;
    }
};