class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res(2,-1);
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==target)
            {
                res[0]=l+1;
                res[1]=r+1;
                return res;
            }
            else if(nums[l]+nums[r]>target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return res;
    }
};