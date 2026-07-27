class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0)return 0;
        if(s>n*9)return -1;
        int digit=0;
        for(int i=0;i<n;i++)
        {
            int j=min(9,s);
            digit=digit*10+j;
            s-=j;
        }
        return digit;
    }
};