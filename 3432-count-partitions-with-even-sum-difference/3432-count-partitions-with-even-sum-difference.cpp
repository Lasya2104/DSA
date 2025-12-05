class Solution {
public:
    int countPartitions(vector<int>& arr) {
        int n=arr.size();
        int sum1=0;
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            sum1+=arr[i];
            int sum2=0;
            for(int j=i+1;j<n;j++)
            {
                sum2+=arr[j];
            }
            if((sum1-sum2)%2==0)cnt++;
        }
        return cnt;
    }
};