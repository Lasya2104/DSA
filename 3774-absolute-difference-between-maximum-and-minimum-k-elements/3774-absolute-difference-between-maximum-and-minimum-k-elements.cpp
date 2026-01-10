class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        if(nums.size()==1 && k==1)return 0;
        sort(nums.begin(),nums.end());
        int sum1=0,sum2=0;
        for(int i=0;i<k;i++)
        {
            sum1+=nums[i];
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<k;i++)
        {
            sum2+=nums[i];
        }
        return abs(sum1-sum2);
    }
};