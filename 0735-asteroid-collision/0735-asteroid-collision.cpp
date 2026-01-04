class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
        int i=0;
        while(i<n)
        {
            if(asteroids[i]>0 || !st.empty() && st.top()<0 && asteroids[i]<0)
            {
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && st.top()>0 && (-asteroids[i])>st.top())
                {
                    st.pop();
                }
                if(st.empty())
                {
                    st.push(asteroids[i]);
                }
                else if(st.top()<0)
                {
                    st.push(asteroids[i]);
                }
                else if(!st.empty() && (-asteroids[i])==st.top())
                {
                    st.pop();
                }
            }
            i++;
        }
        vector<int>res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};