class Solution {
public:
    vector<int>prefixmax(vector<int>&height)
    {
        vector<int>p(height.size());
        p[0]=height[0];
        for(int i=1;i<height.size();i++)
        {
            p[i]=max(p[i-1],height[i]);
        }
        return p;
    }
    vector<int>suffixmax(vector<int>&height)
    {
        vector<int>s(height.size());
        s[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--)
        {
            s[i]=max(s[i+1],height[i]);
        }
        return s;
    }
    int trap(vector<int>& height) {
        int sum=0;
        vector<int>leftmax=prefixmax(height);
        vector<int>rightmax=suffixmax(height);
        for(int i=1;i<height.size()-1;i++)
        {
            if(height[i]<leftmax[i] && height[i]<rightmax[i])
            {
                sum+=min(leftmax[i],rightmax[i])-height[i];
            }
        }
        return sum;
    }
};