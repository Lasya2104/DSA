class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int low=1,high=maxi;
        long long min_ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long sum=0;
            for(int i=0;i<piles.size();i++)
            {
                sum+=ceil((double)piles[i]/mid);
            }
            if(sum<=h)
            {
                min_ans=mid;
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