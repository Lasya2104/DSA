class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,maxlen=0;
        while(r<n)
        {
            if(nums[r]!=0)
            {
                maxlen=max(maxlen,r-l+1);
                r=r+1;
            }
            else
            {
                r=r+1;
                l=r;
            }
        }
        return maxlen;
    }
};