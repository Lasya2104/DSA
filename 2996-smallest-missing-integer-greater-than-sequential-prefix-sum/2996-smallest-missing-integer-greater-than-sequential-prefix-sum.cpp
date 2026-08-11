class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                sum+=nums[i];
            }
            else
            {
                break;
            }
        }
        cout<<sum;
        int mini=sum;
        for(int i=mini;i<=51;i++)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                mini=i;
                break;
            }
        }
        return mini;
    }
};