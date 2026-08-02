class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int esum=0,osum=0;
        for(int i=0;i<piles.size();i++)
        {
            if(i%2==0)esum+=piles[i];
            else osum+=piles[i];
        }
        if(esum>osum || osum>esum)return true;
        else return false;
    }
};