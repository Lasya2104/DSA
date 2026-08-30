class Solution {
public:
    const long long MOD=1000000007;
    long long power(long long x,long long y) {
        long long ans=1;
        while(y>0) {
            if(y%2==1) {
                ans=ans*x%MOD;
            }
            x=x*x%MOD;
            y=y/2;
        }
        return ans;
    }
    int sumDecoded(vector<long long>& nums) {
        long long tsum=0;
        for(int i=0;i<nums.size();i++)
        {
            int w=nums[i]%10;
            long long d=floor(nums[i]/10);
            string s=to_string(d);
            long long x=stoll(s.substr(0,w));
            long long y=stoll(s.substr(w));
            tsum=(tsum+power(x,y))%MOD;
        }
        return tsum;
    }
};