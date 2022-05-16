class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans{-1,-1};
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
              if(nums[mid]==target)
             {
                ans[0]=mid;
                 high=mid-1;
              }
            else if(nums[mid]<target)
            { 
            low=mid+1;
            }
            else{
                high=mid-1;
            }
          }
        int l=0,h=nums.size()-1;
        while(l<=h)
        {
          int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                ans[1]=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};
