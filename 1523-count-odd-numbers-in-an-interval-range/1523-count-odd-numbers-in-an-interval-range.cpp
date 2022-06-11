class Solution {
public:
    int countOdds(int low, int high) {
     int ans,result;
        if(high%2==0&&low%2==0)
        {
        ans=((high-low)/2);
        return ans;
        }
        else
        {
        ans=((high-low)/2)+1;
        return ans;
        }
    }
};