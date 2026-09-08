class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                if((nums[i]+nums[left]+nums[right])==0)
                {
                    s.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if((nums[i]+nums[left]+nums[right])<0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        vector<vector<int>>res(s.begin(),s.end());
        return res;
    }
};