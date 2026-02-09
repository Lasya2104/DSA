class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        for(int i=0;i<n-1;i++)
        {
            int sum = 0;
            int cnt = 0;
            double avg = 0.0;
            for(int j=i+1;j<n;j++)
            {
                sum+=nums[j];
                cnt++;
            }
            avg = sum/cnt;
            if(avg<nums[i])flag++;
        }
        return flag;
    }
};