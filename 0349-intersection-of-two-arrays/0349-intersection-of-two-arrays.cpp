class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int l=0,r=0;
        while(l<nums1.size() && r<nums2.size())
        {
            if(nums1[l] == nums2[r])
            {
                if(res.empty() || res.back()!=nums1[l]){
                    res.push_back(nums1[l]);
                }
                l++;
                r++;
            }
            else if(nums1[l]<nums2[r])
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        return res;
    }
};