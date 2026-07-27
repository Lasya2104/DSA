class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<n;i++)
        {
            int left=i+1;
            int right=n-1;
            while(left<right){
                if((nums[i]+nums[left]+nums[right])==0)
                {
                    s.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if((nums[i]+nums[left]+nums[right])>0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};