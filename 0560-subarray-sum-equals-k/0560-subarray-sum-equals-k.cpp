class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int s=0,cnt=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            int diff=s-k;
            cnt+=mp[diff];
            mp[s]+=1;
        }
        return cnt;
    }
};