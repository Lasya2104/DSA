class Solution {
public:
    int dayreq(vector<int>s,int cap)
    {
        int day=1,load=0;
        for(int i=0;i<s.size();i++)
        {
            if(load+s[i]>cap)
            {
                day++;
                load=s[i];
            }
            else
            {
                load+=s[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }
        int mini=INT_MAX;
        int low=maxi,high=sum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(dayreq(weights,mid)<=days)
            {
                mini=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return mini;
    }
};