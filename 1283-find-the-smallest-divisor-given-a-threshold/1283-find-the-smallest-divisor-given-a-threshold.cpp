class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1,high=maxi;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int a=0;
            for(int i=0;i<nums.size();i++)
            {
                a+=ceil((double)nums[i]/mid);
            }
            if(a>threshold)
            {
                low=mid+1;
            }
            else if(a<=threshold)
            {
                ans=min(ans,mid);
                high=mid-1;
            }
        }
        return ans;
    }
};