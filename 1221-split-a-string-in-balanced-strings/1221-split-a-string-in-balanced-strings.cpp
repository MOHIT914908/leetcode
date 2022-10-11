class Solution {
public:
    int balancedStringSplit(string s) {
        int a=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        { 
         if(s[i]=='L')a++;
         if(s[i]=='R')a--;
         if(a==0) ans++;
       }
        return ans;
    }
};