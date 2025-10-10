class Solution {
public:
    int maximumEnergy(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>res; 
        int maxsum=INT_MIN;
        for(int i=0;i<k;i++)
        {
            int currsum=INT_MIN;
            for(int j=i;j<n;j+=k)
            {
                if(currsum<0)currsum=arr[j];
                else currsum+=arr[j];
            }
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};