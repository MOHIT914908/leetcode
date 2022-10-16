class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1,t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(-nums[t]==nums[j]) return nums[j];
            else if(-nums[t]>nums[j])t++;
            else{
                j--;
            }
        }
        return -1;
    }
};
