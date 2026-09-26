class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //the time complexity is o(n)
        //the space complexity is o(n)
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(mp.find(x)!=mp.end())
            {
                return {mp[x],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};