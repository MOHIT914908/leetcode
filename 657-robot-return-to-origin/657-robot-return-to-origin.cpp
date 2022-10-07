class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0,b=0;
        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='U') a++;
            if(moves[i]=='D') a--;
            if(moves[i]=='R') b++;
            if(moves[i]=='L') b--;
        }
        return (a==0 && b==0);
    }
};