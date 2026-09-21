class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            int x=res.back()[0];
            int y=res.back()[1];
            int a=intervals[i][0];
            int b=intervals[i][1];
            if(a<=max(x,y))
            {
                res.back() = {min(a,x),max(y,b)};
            }
            else
            {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};