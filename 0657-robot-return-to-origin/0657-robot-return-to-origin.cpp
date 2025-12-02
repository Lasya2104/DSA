class Solution {
public:
    bool judgeCircle(string moves) {
        int ucnt=0,dcnt=0,lcnt=0,rcnt=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')ucnt++;
            else if(moves[i]=='D')dcnt++;
            else if(moves[i]=='L')lcnt++;
            else rcnt++;
        }
        if(ucnt==dcnt && lcnt==rcnt)return 1;
        else return 0;
    }
};