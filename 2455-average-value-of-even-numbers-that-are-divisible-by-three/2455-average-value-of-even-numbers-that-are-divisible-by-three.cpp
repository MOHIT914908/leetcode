class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0, cnt=0;
    for(int i=0; i<nums.size(); i++){
        if(!(nums[i]&1) && nums[i]%3==0)
        {
            sum+=nums[i]; 
            cnt++;
        }
    }
    if(sum==0){
        return 0;
    }
    return sum/cnt;
}
};