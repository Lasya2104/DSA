class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        vector<double>res(n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),res.begin());
        sort(res.begin(),res.end());
        int s=res.size();
        if(s%2!=0)
        {
            return res[s/2];
        }
        else
        {
            return (res[s/2]+res[(s-1)/2])/2;
        }
    }
};