class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
          m[nums[i]]++;
        }
        for(auto j:m)
        {
           if(j.second%2!=0)
          {
              return false;
          }
        }
        return true;
    }
};