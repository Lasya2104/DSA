class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int low=0,high=nums.size()-1;
        if(nums[low]==nums[low+1])low++;
        if(nums[high]==nums[high-1])high--;
        int ans=0;
        while(low<=high)
        {
            if(low!=0 && (nums[low]==nums[low-1] || nums[low]==nums[low+1]))
            {
                low++;
            }
            if(high!=nums.size()-1 && (nums[high]==nums[high+1] || nums[high]==nums[high-1]))
            {
                high--;
            }
            if(low==high)
            {
                ans=nums[low];
                break;
            }
        }
        return ans;
    }
};