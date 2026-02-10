class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            unordered_set<int>evens,odds;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]%2!=0)odds.insert(nums[j]);
                else evens.insert(nums[j]);
                if(evens.size() == odds.size())
                {
                    maxi = max(maxi,j-i+1);
                }
            }
        }
        return maxi;
    }
};