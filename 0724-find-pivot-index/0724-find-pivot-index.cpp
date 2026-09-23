class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,tsum=0;
        vector<int>rsum(nums.size(),0);
        vector<int>lsum(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            tsum+=nums[i];
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            sum+=nums[i];
            rsum[i]=tsum-sum;
            lsum[i+1]=sum;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(lsum[i] == rsum[i])return i;
        }
        return -1;
    }
};