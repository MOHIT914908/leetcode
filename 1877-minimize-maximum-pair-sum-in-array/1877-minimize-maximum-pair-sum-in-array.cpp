class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int st=0,end=nums.size()-1;
        while(st<end)
        {
            if(nums[st]+nums[end]>ans)
            {
                ans=nums[st]+nums[end];
            }
            st++;
            end--;
        }
       return ans;
    }
};