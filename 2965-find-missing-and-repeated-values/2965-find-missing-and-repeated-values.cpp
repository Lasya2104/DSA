class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        int n=grid.size();
        int tsum=0,asum=0;
        unordered_set<int>s;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                asum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end())
                {
                    v.push_back(grid[i][j]);
                }
                s.insert(grid[i][j]);
            }
        }
        tsum=(n*n)*(n*n+1)/2;
        int b=tsum+v[0]-asum;
        v.push_back(b);
        return v;
    }
};