class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0; 
        sort(happiness.rbegin(),happiness.rend());
        int j=0;
        for(int i=0;i<k;i++)
        {
            if(happiness[i]-j>0)
            {
                sum+=(happiness[i]-j);
                j++;
            }
        }
        return sum;
    }
};