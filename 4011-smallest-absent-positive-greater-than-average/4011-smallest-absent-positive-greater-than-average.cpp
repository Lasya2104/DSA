class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_map<int,int> frq;
        float sum = 0.0;
        
        for (int i = 0; i < nums.size(); i++) {
            frq[nums[i]]++;
            sum += nums[i];
        }
        
        float avg = sum / nums.size();
        
        // start search strictly greater than avg
        int i = (int)floor(avg) + 1;
        if (i <= 0) i = 1; // must be positive
        
        while (true) {
            if (frq[i] == 0) {
                return i;  // return the first absent positive integer
            }
            i++;
        }
    }
};
