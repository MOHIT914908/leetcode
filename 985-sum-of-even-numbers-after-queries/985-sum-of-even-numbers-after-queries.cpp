class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        vector<int>ans;
        for(auto x:nums)
        {
            if(x%2==0)
            {
                sum+=x;
            }
        }
        for(auto x:queries)
        {
            int i=x[1];
            int val=x[0];
            if(nums[i]%2==0)
            {
                sum-=nums[i];
            }
            nums[i]+=val;
            if(nums[i]%2==0)
            {
                sum+=nums[i];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};