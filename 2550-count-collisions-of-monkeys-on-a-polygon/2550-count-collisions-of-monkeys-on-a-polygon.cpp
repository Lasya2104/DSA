class Solution {
public:
    const int mod = 1e9+7;
    long long power(long long base, long long n)
    {
        long long res = 1;
        while(n>0)
        {
            if(n%2)res = (res*base) % mod;
            base = (base*base) % mod;
            n/=2;
        }
        return res;
    }
    int monkeyMove(int n) {
        long long ans = (power(2,n)-2+mod) % mod;
        return (int)ans;
    }
};