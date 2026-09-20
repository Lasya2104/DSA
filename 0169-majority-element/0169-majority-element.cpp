class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        sort(nums.begin(),nums.end());
        int ans=nums[0];
        int frq=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                frq++;
            }
            else
            {
                frq=1;
                ans=nums[i];
            }
            if(frq>nums.size()/2)
            {
                return ans;
            }
        }
        return ans;
    }
};