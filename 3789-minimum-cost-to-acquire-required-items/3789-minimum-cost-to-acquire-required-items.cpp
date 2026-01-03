class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long r1=(long long)cost1*need1;
        long long r2=(long long)cost2*need2;
        long long total1=r1+r2;
        long long r3=max(need1,need2)*(long long)costBoth;
        long long r4=min(need1,need2)*(long long)costBoth;
        long long r5;
        if(need1>=need2)
        {
            long long diff=need1-need2;
            r5=diff*cost1;
        }
        else
        {
            long long diff=need2-need1;
            r5=diff*cost2;
        }
        long long sum=r4+r5;
        return min({total1,r3,sum});
    }
};