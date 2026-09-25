class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;

        for(int x : nums)
        {
            if(x > 0)
                s.insert(x);
        }

        int counter = 1;

        while(s.find(counter) != s.end())
        {
            counter++;
        }

        return counter;
    }
};