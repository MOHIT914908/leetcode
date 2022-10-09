class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int p=0;
        int m=0;
        for(int i=0;i<gain.size();i++)
        {
            p+=gain[i];
            if(p>m){
                m=p;
            }
        }
        return m;
    }
};