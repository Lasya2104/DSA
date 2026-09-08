class Solution {
public:
    bool search(vector<vector<int>>& matrix, int target,int row)
    {
        int low=0,high=matrix[0].size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(matrix[row][mid]==target)
            {
                return true;
            }
            else if(matrix[row][mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,high=matrix.size()-1;
        int col=matrix[0].size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][col])
            {
                return search(matrix,target,mid);
            }
            else if(target>matrix[mid][col])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return false;
    }
};