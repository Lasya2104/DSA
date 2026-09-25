class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int cnt=0;
        int currend=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<currend)
            {
                cnt++;
                currend=min(currend,intervals[i][1]);
            }
            else
            {
                currend=intervals[i][1];
            }
        }
        return cnt;
    }
};