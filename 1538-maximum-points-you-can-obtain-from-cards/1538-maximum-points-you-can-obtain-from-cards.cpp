class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0;
        for(int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];
        }
        int maxsum=lsum;
        int r=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[r];
            
            maxsum=max(maxsum,lsum+rsum);
            r-=1;
        }
        return maxsum;
    }
};