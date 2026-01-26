class Solution {
public:
    void fun(int idx, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds,int k)
    {
        if(ds.size() == k)
        {
            ans.push_back(ds);
            return;
        }
        if(idx == arr.size())return;
        ds.push_back(arr[idx]);
        fun(idx+1,arr,ans,ds,k);
        ds.pop_back();
        fun(idx+1,arr,ans,ds,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>arr;
        for(int i=1;i<=n;i++)
        {
            arr.push_back(i);
        }
        vector<vector<int>>ans;
        vector<int>ds;
        fun(0,arr,ans,ds,k);
        return ans;
    }
};