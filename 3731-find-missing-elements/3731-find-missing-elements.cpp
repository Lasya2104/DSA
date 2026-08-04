class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int>com;
        for(int i=mini;i<=maxi;i++)
        {
            com.push_back(i);
        }
        map<int,int>frq;
        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }
        vector<int>res;
        for(int i=0;i<com.size();i++)
        {
            if(frq[com[i]]==0)res.push_back(com[i]);
        }
        return res;
    }
};