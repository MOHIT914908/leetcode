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
  

