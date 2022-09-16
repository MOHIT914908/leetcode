class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second==1){
                sum+=x.first;
            }
        }
        return sum;
    }
};