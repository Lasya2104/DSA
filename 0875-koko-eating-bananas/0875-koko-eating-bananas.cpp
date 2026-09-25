class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxi=*max_element(piles.begin(),piles.end());
        long long mini=INT_MAX;
        long long low=1,high=maxi;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            long long a=0;
            for(int i=0;i<piles.size();i++)
            {
                a+=ceil((double)piles[i]/mid);
            }
            if(a>h)
            {
                low=mid+1;
            }
            else if(a<=h)
            {
                mini=min(mini,mid);
                high=mid-1;
            }
        }
        return mini;
    }
};