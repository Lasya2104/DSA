class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt=0;
        int diff=arr[1]-arr[0];
        for(int i=1;i<arr.size()-1;i++)
        {
            int diff2=abs(arr[i]-arr[i+1]);
            if(diff2==diff)cnt++;
        }
        if(cnt==arr.size()-2)return true;
        else return false;
    }
};