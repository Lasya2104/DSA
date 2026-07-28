class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pro=INT_MAX;
        int max_pro=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min_pro)
            {
                min_pro=min(min_pro,prices[i]);
            }
            else
            {
                max_pro=max(max_pro,prices[i]-min_pro);
            }
        }
        return max_pro;
    }
};