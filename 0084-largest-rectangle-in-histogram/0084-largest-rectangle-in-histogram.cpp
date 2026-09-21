class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        vector<int>right(n,-1);
        vector<int>left(n,-1);

        // Finding nearest smaller on left
        stack<int> st;

        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }

            if(!st.empty())
            {
                left[i]=st.top();
            }

            st.push(i);
        }

        // Finding nearest smaller on right
        while(!st.empty())
            st.pop();

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }

            if(!st.empty())
            {
                right[i]=st.top();
            }

            st.push(i);
        }

        int maxi=0;

        for(int i=0;i<n;i++)
        {
            int r=(right[i]==-1 ? n : right[i]);

            int width=r-left[i]-1;

            int area=width*heights[i];

            maxi=max(maxi,area);
        }

        return maxi;
    }
};