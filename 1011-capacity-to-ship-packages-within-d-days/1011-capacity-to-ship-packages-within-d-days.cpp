class Solution {
public:
    int reqdays(vector<int>&weights,int cap)
    {
        int load=0,d=1;
        for(int i=0;i<weights.size();i++)
        {
            if((load+weights[i])<=cap)
            {
                load+=weights[i];
            }
            else
            {
                load=weights[i];
                d++;
            }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int min_ans=INT_MAX;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }
        int maxi=*max_element(weights.begin(),weights.end());
        int low=maxi,high=sum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(reqdays(weights,mid)<=days)
            {
                min_ans=min(min_ans,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return min_ans;
    }
};