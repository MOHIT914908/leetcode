class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n=nums.size();
        int h=0;
        int m=0;
        int l=n-1;
        while(m<=l)
        {
            if(nums[m]==0)
            {
                swap(nums[m],nums[h]);
                m++;h++;
            }
            else if(nums[m]==1){ 
               m++;
            }
            else if(nums[m]==2) {
                swap(nums[m],nums[l--]);
                
            }
        }
    }
};