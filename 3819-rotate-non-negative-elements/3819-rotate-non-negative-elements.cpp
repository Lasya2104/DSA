class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        // if(nums.size()==1 && nums[0]==0)return {0};
        vector<int>positives;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0){
                positives.push_back(nums[i]);
                cnt++;
            }
        }
        if(cnt==0)return nums;
        int n = positives.size();
        k=k%n;
        reverse(positives.begin(),positives.begin()+k);
        reverse(positives.begin()+k,positives.end());
        reverse(positives.begin(),positives.end());
        int j =0 ;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                nums[i] = positives[j++];
            }
        }
        return nums;
    }
};