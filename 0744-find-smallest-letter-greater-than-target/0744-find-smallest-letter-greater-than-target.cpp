class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res;
        int flag = 0;
        for(int i=0;i<letters.size();i++)
        {
            if(letters[i] > target){
                res = letters[i];
                flag = 1;
                break;
            }
        }
        if(flag == 1)return res;
        else return letters[0];
    }
};