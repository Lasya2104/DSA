class Solution {
public:
    bool isPowerOfFour(int n) {
        int flag=0;
        for(long long i=1;i<=n;i*=4)
        {
            if(i==n)flag++;
        }
        return flag>0;
    }
};