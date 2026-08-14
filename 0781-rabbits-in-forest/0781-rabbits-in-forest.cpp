class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        for(int i=0;i<answers.size();i++)
        {
            mp[answers[i]]++;
        }
        int sum=0;
        for(auto &p:mp)
        {
            int x=p.first+1;
            if(p.second<=p.first+1)
            {
                sum+=x;
            }
            else
            {
                int y=ceil((float)p.second/(float)x);
                sum+=(y*x);
            }
        }
        return sum;
    }
};