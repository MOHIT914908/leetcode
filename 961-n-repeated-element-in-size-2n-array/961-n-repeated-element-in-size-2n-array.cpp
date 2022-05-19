class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++)
     {
         if(nums[i]==nums[i+1])//all element are distincct and only one element is repeating
         {
             return nums[i];
         }
     }
        return 0;
        }
};