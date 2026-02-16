class Solution {
public:
    vector<int>arr(int n)
    {
        vector<int>bin(32,0);
        int cnt = -1;
        while(n>0)
        {
            int x = n%2;
            cnt++;
            if(x == 1)
            {
                bin[cnt] = 1;
            }
            n/=2;
        }
        return bin;
    }
    int reverseBits(int n) {
        vector<int>res=arr(n);
        int sum = 0;
        for(int i=0;i<32;i++)
        {
            if(res[i] == 1)
            {
                sum+=pow(2,31-i);
            }
        }
        return sum;
    }
};