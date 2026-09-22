class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a1(nums.size());
        vector<int>a2;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                a1[k]=nums[i];
                k+=2;
            }
        }
        k=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                a1[k]=nums[i];
                k+=2;
            }
        }
        return a1;
    }
};