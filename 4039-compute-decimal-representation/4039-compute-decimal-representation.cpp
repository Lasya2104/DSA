class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>res;
        long long place=1;
        while(n>0)
            {
                int i=n%10;
                if(i!=0)
                {
                    res.push_back((int)i*place);
                }
                place*=10;
                n/=10;
            }
        reverse(res.begin(),res.end());
        return res;
    }
};