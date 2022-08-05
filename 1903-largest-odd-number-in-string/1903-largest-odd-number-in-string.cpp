class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        int i=n-1;
        while(!num.empty())
        {
            if(num[i]%2!=0)
            {
                return num;
            }
            else{
                num.pop_back();
                i--;
            }
        }
        return num;
    }
};