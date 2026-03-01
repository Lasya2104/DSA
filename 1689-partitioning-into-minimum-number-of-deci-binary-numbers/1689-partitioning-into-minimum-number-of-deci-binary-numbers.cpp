class Solution {
public:
    int minPartitions(string n) {
        char s = *max_element(n.begin(),n.end());
        return s-'0';
    }
};