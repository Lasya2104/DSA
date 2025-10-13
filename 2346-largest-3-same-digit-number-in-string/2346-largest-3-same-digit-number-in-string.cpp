class Solution {
public:
    string largestGoodInteger(string num) {
        string res="";
        int n=num.size();
        int maxi=INT_MIN;
        vector<int>nums;
        for(int i=0;i<n-2;i++)
        {
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                int digit=num[i]-'0';
                if(digit>maxi)
                {
                    maxi=digit;
                    res=string(3,num[i]);
                }
            }
        }
        return res;
    }
};