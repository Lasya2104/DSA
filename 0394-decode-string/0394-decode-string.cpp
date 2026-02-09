class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        int n = s.size();

        for (int i = n - 1; i >= 0; i--) {

            // Case 1: letter → push
            if (isalpha(s[i])) {
                st.push(string(1, s[i]));
            }

            // Case 2: closing bracket → marker
            else if (s[i] == ']') {
                st.push("]");
            }

            // Case 3: opening bracket → build substring
            else if (s[i] == '[') {
                string temp = "";

                while (!st.empty() && st.top() != "]") {
                    temp += st.top();
                    st.pop();
                }
                st.pop(); // remove ']'
                st.push(temp);
            }

            // Case 4: digit → repeat
            else if (isdigit(s[i])) {
                int num = 0;
                int base = 1;

                // handle multi-digit numbers
                while (i >= 0 && isdigit(s[i])) {
                    num = (s[i] - '0') * base + num;
                    base *= 10;
                    i--;
                }
                i++; // adjust index

                string str = st.top();
                st.pop();

                string repeated = "";
                while (num--) {
                    repeated += str;
                }

                st.push(repeated);
            }
        }

        // Final result
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
