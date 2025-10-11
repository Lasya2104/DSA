class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>cnt(n,1);
        for(int i=0;i<n-1;i++)
        {
            if(ratings[i]<ratings[i+1] && cnt[i+1]<=cnt[i])
            {
                cnt[i+1]=cnt[i]+1;
            }
            if(ratings[i]>ratings[i+1] && cnt[i]<=cnt[i+1])
            {
                cnt[i]+=1;
            }
        }
        for(int i=n-1;i>0;i--)
        {
            if(ratings[i]<ratings[i-1] && cnt[i]>=cnt[i-1])
            {
                cnt[i-1]=cnt[i]+1;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=cnt[i];
        }
        return sum;
    }
};