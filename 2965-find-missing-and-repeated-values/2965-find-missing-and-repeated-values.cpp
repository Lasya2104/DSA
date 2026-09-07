class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>res;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                v.push_back(grid[i][j]);
            }
        }
        unordered_map<int,int>frq;
        for(int i=0;i<v.size();i++)
        {
            frq[v[i]]++;
        }
        for(int i=1;i<=v.size();i++)
        {
            if(frq[i]==2)
            {
                res.push_back(i);
            }
        }
        for(int i=1;i<=v.size();i++)
        {
            if(frq[i]==0)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};