class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=INT_MAX;
        int pro=0;
        for(int i=0;i<prices.size();i++)
        {
            mi=min(mi,prices[i]);
            pro=max(pro,prices[i]-mi);
        }
        return pro;
    }
};