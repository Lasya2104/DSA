class Solution {
public:
    int rem(vector<int>&nums,int cap)
    {
        int load=0,days=1;
        for(int i=0;i<nums.size();i++)
        {
            if(load+nums[i]<=cap)
            {
                load+=nums[i];
            }
            else
            {
                days++;
                load=nums[i];
            }
        }
        return days;
    }
    int splitArray(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int mini=INT_MAX;
        int low=maxi,high=sum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(rem(nums,mid)<=k)
            {
                mini=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return mini;
    }
};