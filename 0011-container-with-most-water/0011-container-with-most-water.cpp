class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int max_len=INT_MIN;
        while(left<=right)
        {
            int curr=min(height[left],height[right])*(right-left);
            max_len=max(max_len,curr);
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max_len;
    }
};