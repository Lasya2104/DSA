class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zcnt=0,ocnt=0,tcnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)zcnt++;
            else if(nums[i]==1)ocnt++;
            else tcnt++;
        }
        int k=0;
        while(zcnt!=0)
        {
            nums[k++]=0;
            zcnt-=1;
        }
        while(ocnt!=0)
        {
            nums[k++]=1;
            ocnt-=1;
        }
        while(tcnt!=0)
        {
            nums[k++]=2;
            tcnt-=1;
        }
    }
};