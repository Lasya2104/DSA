int min(int *nums,int numsSize)
{
    int m=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<m)
        {
            m=nums[i];
        }
    }
    return m;
}
int max(int *nums,int numsSize)
{
    int ma=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>ma)
        {
            ma=nums[i];
        }
    }
    return ma;
}
int findNonMinOrMax(int* nums, int numsSize) {
    if(numsSize==1 || numsSize==2)return -1;
    int min_num=min(nums,numsSize);
    int max_num=max(nums,numsSize);
    int res=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=min_num && nums[i]!=max_num)
        {
            return nums[i];
        }
    }
    return -1;
}