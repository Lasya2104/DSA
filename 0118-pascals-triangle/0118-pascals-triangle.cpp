class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>matrix;
        for(int i=0;i<n;i++)
        {
            vector<int>arr;
            for(int j=0;j<=i;j++)
            {
                arr.push_back(0);
            }
            matrix.push_back(arr);
        }
        for(int i=0;i<n;i++)
        {
            matrix[i][0]=1;
            matrix[i][i]=1;
        }
        for(int i=2;i<n;i++)
        {
            for(int j=1;j<i;j++)
            {
                matrix[i][j]=matrix[i-1][j]+matrix[i-1][j-1];
            }
        }
        return matrix;
    }
};