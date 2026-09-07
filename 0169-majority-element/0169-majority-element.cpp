class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int frq=1,res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                frq++;
            }
            else
            {
                frq=1;
                res=nums[i];
            }
            if(frq>(nums.size()/2))
            {
                return res;
            }
        }
        return res;
    }
};