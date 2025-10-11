class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ecnt1=0,ocnt1=0;
        long long ecnt2=0,ocnt2=0;
        for(long long i=1;i<=n;i++)
        {
            if(i%2==0)ecnt1++;
            else ocnt1++;
        }
        for(long long j=1;j<=m;j++)
        {
            if(j%2==0)ecnt2++;
            else ocnt2++;
        }
        long long res1=ocnt1*ecnt2;
        long long res2=ocnt2*ecnt1;
        long long total_res=res1+res2;
        return total_res;
    }
};