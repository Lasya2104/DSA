class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int temp=1;
        int left=0,right=0;
        int sum=nums[0];
        double max_avg=INT_MIN;
        while(right<nums.size())
        {
            if(temp==k)
            {
                double avg=(double)sum/k;
                max_avg=max(max_avg,avg);
                sum-=nums[left];
                left++;
                temp-=1;
            }
            right++;
            if(right<nums.size())sum+=nums[right];
            temp++;
        }
        return max_avg;
    }
};