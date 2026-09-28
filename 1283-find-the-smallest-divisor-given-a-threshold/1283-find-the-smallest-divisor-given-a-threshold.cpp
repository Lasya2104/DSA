class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=*max_element(nums.begin(),nums.end());
        int min_ans=INT_MAX;
        int low=1,high=maxi;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++)
            {
                sum+=ceil(((float)nums[i]/mid));
            }
            if(sum<=threshold)
            {
                min_ans=min(min_ans,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return min_ans;
    }
};