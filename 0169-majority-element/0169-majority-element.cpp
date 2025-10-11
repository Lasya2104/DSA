class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int,int>frq;
        for(int i=0;i<arr.size();i++)
        {
            frq[arr[i]]++;
        }
        long long maxfrq=-1;
        int size=arr.size()/2;
        for(long long i=0;i<=100000;i++)
        {
            if(frq[i]>size)
            {
                maxfrq=i;
            }
        }
        return maxfrq;
    }
};