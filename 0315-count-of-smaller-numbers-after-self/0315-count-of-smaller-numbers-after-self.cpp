class Solution {
public:
    vector<int>res;

    void merge(vector<pair<int,int>>&arr,int n,int low,int mid,int high)
    {
        int i=low;
        int j=mid+1;
        vector<pair<int,int>>b;
        int k=0;
        int cnt=0;

        while(i<=mid && j<=high)
        {
            if(arr[i].first<=arr[j].first)
            {
                res[arr[i].second]+=cnt;
                b.push_back(arr[i]);
                i++;
            }
            else
            {
                b.push_back(arr[j]);
                j++;
                cnt++;
            }
        }

        while(i<=mid)
        {
            res[arr[i].second]+=cnt;
            b.push_back(arr[i]);
            i++;
        }

        while(j<=high)
        {
            b.push_back(arr[j]);
            j++;
        }

        for(int i=low;i<=high;i++)
        {
            arr[i]=b[i-low];
        }
    }

    void mergesort(vector<pair<int,int>>&arr,int n,int low,int high)
    {
        if(low>=high)
            return;

        int mid=(low+high)/2;

        mergesort(arr,n,low,mid);
        mergesort(arr,n,mid+1,high);

        merge(arr,n,low,mid,high);
    }

    vector<int> countSmaller(vector<int>& nums) {

        int n=nums.size();

        res.resize(n,0);

        vector<pair<int,int>>arr;

        for(int i=0;i<n;i++)
        {
            arr.push_back({nums[i],i});
        }

        mergesort(arr,n,0,n-1);

        return res;
    }
};