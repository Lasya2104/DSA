int priority(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}
class Solution {
public:
    int calculate(string s) {
        stack<char>symbol;
        stack<int>number;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')continue;
            if (isdigit(s[i])) {
        int val = 0;
        while (i < s.size() && isdigit(s[i])) {
            val = val * 10 + (s[i] - '0');
            i++;
        }
        number.push(val);
        i--;  // important
    } 
            else{
                while(number.size()>=2 && !symbol.empty() && priority(s[i])<=priority(symbol.top()))
                {
                    int num1=number.top();
                    number.pop();
                    int num2=number.top();
                    number.pop();
                    int num3;
                    if(symbol.top()=='/')
                    {
                        num3=num2/num1;
                    }
                    else if(symbol.top()=='*')
                    {
                        num3=num2*num1;
                    }
                    else if(symbol.top()=='-')
                    {
                        num3=num2-num1;
                    }
                    else if(symbol.top()=='+')
                    {
                        num3=num2+num1;
                    }
                    number.push(num3);
                    symbol.pop();
                }
                symbol.push(s[i]);
            }
        }
        while(!symbol.empty() && number.size()>=2)
        {
            int n1=number.top();
            number.pop();
            int n2=number.top();
            number.pop();
            if(symbol.top()=='/' && n1!=0)
            {
                number.push(n2/n1);
            }
            else if(symbol.top()=='*')
            {
                number.push(n2*n1);
            }
            else if(symbol.top()=='-')
            {
                number.push(n2-n1);
            }
            else if(symbol.top()=='+')
            {
                number.push(n2+n1);
            }
            symbol.pop();
        }
        return number.top();
    }
};