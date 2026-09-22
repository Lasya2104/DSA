class Solution {
public:
    int cnt=0;
    void merge(vector<int>&nums,int n,int low,int mid,int high)
    {
        int i=low;
        int j=mid+1;
        int b[high-low+1];
        int k=0;
        while(i<=mid && j<=high)
        {
            if(nums[i]<nums[j])
            {
                b[k++]=nums[i++];
            }
            else
            {
                b[k++]=nums[j++];
            }
        }
        while(i<=mid)b[k++]=nums[i++];
        while(j<=high)b[k++]=nums[j++];
        k=0;
        for(int i=low;i<=high;i++)
        {
            nums[i]=b[k++];
        }
    }
    int count_pairs(vector<int>&nums,int n,int low,int mid,int high)
    {
        int right=mid+1;
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && nums[i]>1ll*2*nums[right])
            {
                right++;
                
            }
            cnt+=right-(mid+1);
        }
        return cnt;
    }
    void mergesort(vector<int>&nums,int n,int low,int high)
    {
        if(low>=high)return;
        int mid=(low+high)/2;
        mergesort(nums,n,low,mid);
        mergesort(nums,n,mid+1,high);
        count_pairs(nums,n,low,mid,high);
        merge(nums,n,low,mid,high);
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,n,0,n-1);
        return cnt;
    }
};