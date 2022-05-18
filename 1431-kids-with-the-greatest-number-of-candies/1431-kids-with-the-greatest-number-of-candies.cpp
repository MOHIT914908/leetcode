class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>max)
            {
                max=candies[i];
            }
        }
     vector<bool>ans;
     int n=candies.size();
        for(int i=0;i<n;i++)
        {
            if(candies[i] + extraCandies<max)
            {
                ans.push_back(false);
            }
            else{
                ans.push_back(true);
            }
        }
        return ans;
    }
};
