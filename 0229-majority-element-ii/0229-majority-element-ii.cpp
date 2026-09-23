class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // vector<int>res;
        // int frq=1;
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         frq++;
        //     }
        //     else
        //     {
        //         frq=1;
        //     }
        //     if(frq>(nums.size()/3))
        //     {
        //         res.push_back(nums[i]);
        //     }
        // }
        // return res;

        unordered_map<int,int>frq;
        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }
        vector<int>res;
        for(auto &p:frq)
        {
            if(p.second>(nums.size()/3))res.push_back(p.first);
        }
        return res;
    }
};