class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>prefix_sum(n-1),suffix_sum(n-1);
        prefix_sum[0]=nums[0];
        for(int i=1;i<n-1;i++)
        {
            prefix_sum[i]=prefix_sum[i-1]+nums[i];
        }
        suffix_sum[n-2]=nums[n-1];
        for(int i=n-3;i>=0;i--)
        {
            suffix_sum[i]=min(suffix_sum[i+1],(long long)nums[i+1]);
            cout<<suffix_sum[i]<<" ";
        }
        long long total=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            long long score = prefix_sum[i]-suffix_sum[i];
            total = max(total,score);
        }
        return total;
    }
};