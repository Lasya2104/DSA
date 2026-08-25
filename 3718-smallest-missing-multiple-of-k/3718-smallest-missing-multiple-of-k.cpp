class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int mini=INT_MAX;
        for(int i=1;i<=101;i++)
        {
            if(find(nums.begin(),nums.end(),k*i)==nums.end())
            {
                mini=k*i;
                break;
            }
        }
        return mini;
    }
};