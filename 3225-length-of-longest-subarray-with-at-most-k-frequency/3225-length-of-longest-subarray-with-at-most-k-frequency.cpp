class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0,r=0,maxlen=0;
        unordered_map<long long,long long>frq;
        while(r<nums.size())
        {
            frq[nums[r]]++;
            while(frq[nums[r]]>k)
            {
                frq[nums[l]]--;
                l++;
            }
            maxlen=max(maxlen,(r-l+1));
            r++;
        }
        return maxlen;
    }
};