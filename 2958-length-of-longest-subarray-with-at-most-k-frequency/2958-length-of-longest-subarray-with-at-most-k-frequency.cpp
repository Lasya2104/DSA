class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int max_len=0;
        int l=0,r=0;
        unordered_map<int,int>mp;
        while(r<nums.size())
        {
            if(mp[nums[r]]<k)
            {
                mp[nums[r]]++;
                max_len=max(max_len,r-l+1);
                r++;
            }
            else
            {
                mp[nums[l]]--;
                l++;
            }
        }
        return max_len;
    }
};