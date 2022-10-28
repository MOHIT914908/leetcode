class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
         vector<int>ans;
        vector<int>l1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(pivot>nums[i])
            {
                ans.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                l1.push_back(nums[i]);
            }
            else{
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            ans.push_back(pivot);
        }
           for(int i=0;i<l1.size();i++)
        {
            ans.push_back(l1[i]);
        }
        return ans;
    }
};
