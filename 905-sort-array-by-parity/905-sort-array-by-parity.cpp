class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
     for(int i=0;i<nums.size();i++)
     {
         if((nums[i]&1)==0)//for odd numbers 
         {
             ans.push_back(nums[i]);
         }
     }
     for(int i=0;i<nums.size();i++)
     {
         if((nums[i]&1)==1)//for even numbers 
         {
             ans.push_back(nums[i]);
         }
     }
    return ans;
    }

};