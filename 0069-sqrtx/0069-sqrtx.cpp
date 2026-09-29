class Solution {
public:
    int mySqrt(int x) {
        if(x<2)return x;
        int low=1,high=(x/2);
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(1ll*mid*mid == x)return mid;
            else if(1ll*mid*mid>x)high=mid-1;
            else low=mid+1;
        }
        return low-1;
    }
};