class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int idx=0;
        for(int i=0;i<matrix.size();i++)
        {
            if(target>=matrix[i][0])
            {
                idx=i;
            }
            else
            {
                break;
            }
        }
        cout<<idx;
        int flag=0;
        for(int i=0;i<matrix[idx].size();i++)
        {
            if(find(matrix[idx].begin(),matrix[idx].end(),target)!=matrix[idx].end())
            {
                flag=1;
            }
        }
        if(flag==0)return false;
        else return true;
    }
};