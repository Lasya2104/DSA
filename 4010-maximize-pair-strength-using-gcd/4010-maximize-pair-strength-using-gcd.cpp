class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long max_pair=INT_MIN;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                long long maxi=(1LL*nums[i]*nums[j])/pow((gcd(nums[i],nums[j])),2);
                max_pair=max(maxi,max_pair);
            }
        }
        return max_pair;
    }
};