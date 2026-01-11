bool fun(vector<int>arr)
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
    }
    int flag=0;
    for(int i=0;i<arr.size();i++)
    {
        if(sum==arr[i])flag++;
    }
    if(flag>0)return true;
    else return false;
}
class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        vector<vector<int>>allsubs;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            long long sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                for(int k=i;k<=j;k++)
                {
                    if(nums[k]==sum)
                    {
                        cnt++;
                        break;
                    }
                }
            } 
        }
        return cnt;
    }
};