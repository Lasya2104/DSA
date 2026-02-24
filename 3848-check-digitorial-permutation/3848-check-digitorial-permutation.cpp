class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};
        string s = to_string(n);
        sort(s.begin(),s.end());
        do{
            int sum = 0;
            for(int i=0;i<s.size();i++)
            {
                sum+=fact[s[i]-'0'];
            }
            if(to_string(sum) == s)return true;
        }while(next_permutation(s.begin(),s.end()));
        return false;
    }
};