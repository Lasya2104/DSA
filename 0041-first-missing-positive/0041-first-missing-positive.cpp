class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int min_val=1;
        while(s.count(min_val))
        {
            min_val++;
        }
        return min_val;
    }
};