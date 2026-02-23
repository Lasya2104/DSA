class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int asum=0,isum=0,c=0;



        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                swap(asum,isum);
                c++;
            }
            if((i+1)%6==0)
            {
                swap(asum,isum);
                c++;
            }
            asum+=nums[i];
        }

        if(c==0 || c%2==0)return asum-isum;
        else return isum-asum;

    }
};