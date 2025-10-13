int sumOfUnique(int* nums, int numsSize) {
    int frq[101]={0};
    for(int i=0;i<numsSize;i++)
    {
        frq[nums[i]]++;
    }
    int sum=0;
    for(int i=0;i<101;i++)
    {
        if(frq[i]==1)
        {
            sum+=i;
        }
    }
    return sum;
}