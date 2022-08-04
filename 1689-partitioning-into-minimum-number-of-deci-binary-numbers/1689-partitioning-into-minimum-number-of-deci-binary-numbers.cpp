/*we just have to find the maximum digit in n */
class Solution {
public:
    int minPartitions(string n) {
        int m=0;
       for(auto i : n)
       {
           m=max(m,(int)(i-'0'));
       }
        return m;
    }
};