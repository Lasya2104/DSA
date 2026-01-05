class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int main_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int cnt=0;
            int sum=0;
            for(int j=1;j<=(nums[i]);j++)
            {
                if(nums[i]%j==0)
                {
                    cnt++;
                    sum+=j;
                }
                if(cnt>4)
                {
                    break;
                }
            }
            if(cnt==4)
            {
                main_sum+=sum;
            }
        }
        return main_sum;
    }
};