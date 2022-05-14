/* to find the largest parimeter we have to find the sum of largest size and compare with the largest element in the array */
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;--i)
        {
            if(nums[i]<nums[i-1]+nums[i-2])
            {
                return (nums[i]+nums[i-1]+nums[i-2]);
            }
        }
        return 0;
    }
};