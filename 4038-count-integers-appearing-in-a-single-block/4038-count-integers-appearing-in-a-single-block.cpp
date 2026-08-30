class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int>cnt;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int res=0;
        for(auto &p:mp)
        {
            int cnt=p.second;
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]==p.first && nums[i]==nums[i+1])
                {
                    cnt--;
                }
            }
            if(cnt==1)res++;
        }
        return res;
    }
};