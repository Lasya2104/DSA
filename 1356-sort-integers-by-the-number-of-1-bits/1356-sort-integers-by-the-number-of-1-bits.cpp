class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>res;
        for(int i=0;i<arr.size();i++)
        {
            int x = __builtin_popcount(arr[i]);
            res.push_back(x);
        }
        vector<pair<int,int>>mat;
        for(int i=0;i<arr.size();i++)
        {
            mat.push_back({res[i],arr[i]});
        }
        sort(mat.begin(),mat.end());
        vector<int>result;
        for(auto &p:mat)
        {
            result.push_back(p.second);
        }
        return result;
    }
};