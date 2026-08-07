class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long maxi=*max_element(nums.begin(),nums.end());
        long long low=1,high=maxi;
        long long ans=INT_MAX;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            long long a=0;
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