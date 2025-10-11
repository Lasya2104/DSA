int arraySign(int* nums, int numsSize) {
    int mult1=1,mult2=1,mult3=1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<0)
        {
            mult1*=-1;
        }
        if(nums[i]>0)
        {
            mult2*=1;
        }
        if(nums[i]==0)
        {
            mult3*=0;
        }
    }
    return mult1*mult2*mult3;
}