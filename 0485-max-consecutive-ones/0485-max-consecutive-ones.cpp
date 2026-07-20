class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_len=INT_MIN;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            max_len=max(max_len,cnt);
        }
        return max_len;
    }
};