bool binary_search(vector<int>arr,int value)
{
    int low=0,high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==value)
        {
            return true;
        }
        else if(arr[mid]<value)
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
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(target>=matrix[i][0] && target<=matrix[i][m-1])
            {
                return binary_search(matrix[i],target);
            }
        }
        return 0;
    }
};