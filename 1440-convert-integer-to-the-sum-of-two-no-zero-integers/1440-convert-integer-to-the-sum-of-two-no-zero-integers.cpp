int fun(int n)
{
    int cnt=0;
    int temp=n;
    while(temp)
    {
        int i=temp%10;
        if(i==0)cnt++;
        temp/=10;
    }
    if(cnt==0)return 0;
    else return 1;
}
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>res(2);
        for(int i=1;i<n;i++)
        {
            if(fun(i)==0 && fun(n-i)==0)
            {
                res[0]=i;
                res[1]=n-i;
            }
        }
        return res;
    }
};