class Solution {
public:
    char findTheDifference(string s, string t) {
     int n=t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                return t[i];
            }
        }
        return 0;
    }
};