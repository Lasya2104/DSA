class Solution {
public:
    int minimumPushes(string word) {
        int x= word.size();
        if(x>=25) return (x-24)*4 + 48;
        if(x>=17) return (x-16)*3 + 24;
        if(x>=9)  return (x-8)*2 + 8; 
        return x; 
    }
};