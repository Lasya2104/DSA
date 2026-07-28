class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int max_cnt=0;
        int cnt=0;
        vector<int>arr(s.begin(),s.end());
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==1)
            {
                cnt++;
                max_cnt=max(max_cnt,cnt);
            }
            else
            {
                cnt=0;
            }
        }
        return max_cnt+1;
    }
};