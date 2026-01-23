class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprofit=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minprofit)
            {
                minprofit=prices[i];
            }
            else
            {
                maxprofit=max(maxprofit,prices[i]-minprofit);
            }
        }
        return maxprofit;
    }
};