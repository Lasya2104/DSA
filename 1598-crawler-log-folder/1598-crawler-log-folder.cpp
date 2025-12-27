class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string>st;
        for(const string& log:logs)
        {
            if(log=="../")
            {
                if(!st.empty())st.pop_back();
            }
            else if(log!="./")
            {
                st.push_back(log);
            }
        }
        return st.size();
    }
};