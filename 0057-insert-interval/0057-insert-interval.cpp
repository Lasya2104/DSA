class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>intervals2;
        intervals2.push_back(newInterval);
        intervals.insert(intervals.end(),intervals2.begin(),intervals2.end());
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size()-1;i++)
        {
            if(intervals[i][1]>=intervals[i+1][0])
            {
                intervals[i][0]=min(intervals[i][0],intervals[i+1][0]);
                intervals[i][1]=max(intervals[i][1],intervals[i+1][1]);
                intervals.erase(intervals.begin()+i+1);
                i--;
            }
        }
        return intervals;
    }
};