class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx=find(nums.begin(),nums.end(),target)-nums.begin();
        if(idx==nums.size())return -1;
        else return idx;
    }
};