class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0,r=0,maxlen=0;
        unordered_map<int,int>frq;
        while(r<n)
        {
            frq[fruits[r]]++;
            if(frq.size()>2)
            {
                    frq[fruits[l]]--;
                    if(frq[fruits[l]]==0)
                    {
                        frq.erase(fruits[l]);
                    }
                    l++;
            }
            if(frq.size()<=2)
            {
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};