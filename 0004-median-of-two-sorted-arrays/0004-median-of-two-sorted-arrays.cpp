class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        int low=0,high=nums1.size()-1;
        int mid=(low+high)/2;
        if(nums1.size()%2!=0)
        {
            return (double)nums1[mid];
        }
        else return ((double)nums1[mid]+(double)nums1[mid+1])/2;
    }
};