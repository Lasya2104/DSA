class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int>res;
        res.push_back(ans);
        for(int i=1;i<rowIndex;i++)
        {
            ans=ans*(rowIndex-i);
            ans=ans/i;
            res.push_back(ans);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            vector<int>temp=getRow(i);
            ans.push_back(temp);
        }
        return ans;
    }
};