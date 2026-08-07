class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxi=*max_element(piles.begin(),piles.end());
        long long low=1,high=maxi;
        long long ans=INT_MAX;
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
                ans=min(ans,mid);
                high=mid-1;
            }
            else if(a>h && mid<ans)break;
        }
        return ans;
    }
};