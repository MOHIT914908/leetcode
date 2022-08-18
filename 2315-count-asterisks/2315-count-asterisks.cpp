class Solution {
public:
    int countAsterisks(string s) {
        bool ispair=false;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
           if(s.at(i)== '|')
            {
                ispair=!ispair;
            }
            if(s.at(i)=='*' && ispair==false)
            {
                ans++;
            }
        }
        return ans;
        
    }
};