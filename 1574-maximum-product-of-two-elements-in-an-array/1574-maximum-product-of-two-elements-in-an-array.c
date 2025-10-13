int maxProduct(int* nums, int numsSize) {
    int max=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            int mult=(nums[i]-1)*(nums[j]-1);
            if(mult>max)
            {
                max=mult;
            }
        }
    }
    return max;
}