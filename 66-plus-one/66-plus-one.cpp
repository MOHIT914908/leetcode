class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int s=digits.size();
        for(int i=s-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]++;
                break;
            }
            else{
                digits[i]=0;
            }
        }
        if(digits[0]==0)
        {
       vector<int> res(s+1);
            res[0]=1;
            return res;
        }
        return digits;
    }
};
       /* int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i]<9){
                nums[i]=nums[i]+1;
                return nums;
            }
            else{
                nums[i]=0;
            }
        }
        nums[0]=1;
        nums.push_back(0);
        return nums;*/

