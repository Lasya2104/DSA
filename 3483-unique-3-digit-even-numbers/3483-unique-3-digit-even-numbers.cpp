class Solution {
public:
    set<int>st;
    void fun(int idx, int num, vector<int>&digits, vector<int>frq)
    {
        if(idx == 3)
        {
            st.insert(num);
            return;
        }
        for(int i=0;i<digits.size();i++)
        {
            if(frq[i])continue;
            if(idx == 0 && digits[i] == 0)continue;
            if(idx == 2 && digits[i]%2!=0)continue;
            frq[i]=1;
            fun(idx+1,num*10+digits[i],digits,frq);
            frq[i]=0;
        }
    }
    int totalNumbers(vector<int>& digits) {
        vector<int>frq(digits.size(),0);
        fun(0,0,digits,frq);
        return st.size();
    }
};