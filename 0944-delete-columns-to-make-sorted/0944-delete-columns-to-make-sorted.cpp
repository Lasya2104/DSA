class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int k=strs[0].size();
        int cnt=0;
        for(int i=0;i<k;i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]<strs[j-1][i])
                {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};