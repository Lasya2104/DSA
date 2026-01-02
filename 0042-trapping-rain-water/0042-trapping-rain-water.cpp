class Solution {
public:
    int trap(vector<int>& heights) {
        int n=heights.size();
        int total=0;
        vector<int>leftmax(n),rightmax(n);
        leftmax[0]=heights[0];
        for(int i=1;i<n;i++)
        {
            leftmax[i]=max(leftmax[i-1],heights[i]);
        }
        rightmax[n-1]=heights[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i]=max(rightmax[i+1],heights[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            total+=min(leftmax[i],rightmax[i])-heights[i];
        }
        return total;
    }
};