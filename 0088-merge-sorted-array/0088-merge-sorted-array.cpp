class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //The tc is o(n log n)
        //The sc is o(1)
        nums1.resize(m+n);
        int k=0;
        for(int i=m;i<nums1.size();i++)
        {
            nums1[i]=nums2[k++];
        }
        sort(nums1.begin(),nums1.end());
    }
};