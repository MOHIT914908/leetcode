class Solution {
public:
    string removeOccurrences(string s, string part) {
         int n =s.length();
        size_t pos=s.find(part);
        while(n!=0 && pos<n)
        {
            s.erase(pos,part.length());
             pos=s.find(part);
        }
        return s;
    }
};