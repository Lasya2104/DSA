int numIdenticalPairs(int* nums, int numsSize) {
    int frq[101]={0};
    int ans=0;
    for(int i=0;i<numsSize;i++)
    {
        ans+=frq[nums[i]]++;
    }
    return ans;
}