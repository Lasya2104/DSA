class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int t_sum=0;
        int s1=0,s2=0,s3=0;
        for(int i=stoneValue.size()-1;i>=0;i--)
        {
            t_sum+=stoneValue[i];
            int curr=t_sum-min({s1,s2,s3});
            s3=s2;
            s2=s1;
            s1=curr;
        }
        int b=t_sum-s1;
        if(s1>b)return "Alice";
        if(s1==b)return "Tie";
        else return "Bob";
    }
};