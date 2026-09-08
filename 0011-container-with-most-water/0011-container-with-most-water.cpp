class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int max_water=INT_MIN;
        while(left<right)
        {
            int x=min(height[left],height[right])*(right-left);
            max_water=max(max_water,x);
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max_water;
    }
};