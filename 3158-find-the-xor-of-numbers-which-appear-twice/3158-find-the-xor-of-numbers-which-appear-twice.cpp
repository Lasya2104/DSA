class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>frq;
        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }
        int x=0;
        for(auto &p:frq)
        {
            if(p.second==2)
            {
                x^=p.first;
            }
        }
        return x;
    }
};