int repeatedNTimes(int* nums, int numsSize) {
    int frq[10001] = {0};
    for (int i = 0; i < numsSize; i++) {
        frq[nums[i]]++;
        if (frq[nums[i]] > 1) {
            return nums[i];
        }
    }
    return -1; 
}
