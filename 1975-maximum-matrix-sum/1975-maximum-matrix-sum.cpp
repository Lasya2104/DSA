class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        vector<int>arr;
        int cnt=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<0)cnt++;
                arr.push_back(abs(matrix[i][j]));
            }
        }
        long long sum=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        int osum=sum-arr[0];
        if(cnt%2==0)
        {
            return sum;
        }
        else
        {
            return osum-arr[0];
        }
    }
};