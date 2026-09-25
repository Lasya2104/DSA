class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        set<int>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])s.insert(nums[i]);
        }
        vector<int>res(s.begin(),s.end());
        return res;
    }
};