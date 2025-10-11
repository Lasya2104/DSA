int sum(vector<int>arr)
{
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n=tasks.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            vector<int>a=tasks[i];
            if(sum(a)<mini)
            {
                mini=sum(a);
            }
        }
        return mini;
    }
};