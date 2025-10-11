class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        set<int>res;
        for(int i=0;i<n;i++)
        {
            res.insert(nums[i]);
        }
        vector<int>ans(res.begin(),res.end());
        sort(ans.rbegin(),ans.rend());
        vector<int>a;
        for(int i=0;i<k && i<ans.size();i++)
        {
            a.push_back(ans[i]);
        }
        return a;
    }
};