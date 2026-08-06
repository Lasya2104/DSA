class Solution {
public:
    int pro(int n)
    {
        int p=1;
        while(n){
            p*=(n%10);
            n/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        if(pro(n)%t==0)return n;
        int mini=0;
        for(int i=1;i<=10;i++)
        {
            int x=n+i;
            if(pro(x)%t==0)
            {
                mini=x;
                break;
            }
        }
        return mini;
    }
};