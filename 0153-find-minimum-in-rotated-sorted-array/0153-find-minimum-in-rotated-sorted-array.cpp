class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<mini)
            {
                mini=nums[mid];
            }
            if(nums[low]<=mini)
            {
                if(nums[high]>mini)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(nums[low]>mini && nums[high]>mini)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
        }
        return mini;
    }
};