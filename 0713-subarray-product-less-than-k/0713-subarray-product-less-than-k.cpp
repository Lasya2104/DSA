class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int l=0,r=0;
        long long mul=1;
        int cnt=0;
        while(r<nums.size())
        {
            mul*=nums[r];
            while(mul>=k)
            {
                mul/=nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        
        return cnt;
    }
};