class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        permute(nums,0,v);
        return v; 
    }
private:
    void permute(vector<int>nums,int i,vector<vector<int>>&v)
    {
         if (i == nums.size()) {
            v.push_back(nums);
        } else {
            for (int j = i; j < nums.size(); j++) {
                swap(nums[i], nums[j]);
                permute(nums, i + 1,v);
            }
        }
    }
};
