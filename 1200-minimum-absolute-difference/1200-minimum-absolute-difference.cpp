class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min_diff=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
        {
            int diff = abs(arr[i]-arr[i+1]);
            min_diff = min(diff,min_diff);
        }
        vector<vector<int>>ans;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(abs(arr[i]-arr[i+1]) == min_diff)
            {
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};