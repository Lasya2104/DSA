class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int left=0,right=n-1,top=0,bottom=n-1,num=1;
        while(num<=n*n)
        {
            for(int i=left;i<=right && num<=n*n;i++)
            {
                ans[top][i]=num++;
            }
            top++;
            for(int i=top;i<=bottom && num<=n*n;i++)
            {
                ans[i][right]=num++;
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left && num<=n*n;i--)
                {
                    ans[bottom][i]=num++;
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans[i][left]=num++;
                }
                left++;
            }
        }
        return ans;
    }
};