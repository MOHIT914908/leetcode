class Solution {
public:
    int minimumSum(int num) {
           vector<int>copy;
        while(num>0)
        {
            copy.push_back(num%10);
            num=num/10;
        }
        sort(copy.begin(),copy.end());
        int rev=0,rev1=0;
        for(int i=0;i<4;i+=2)
            rev=rev*10+(copy[i]);
        for(int i=1;i<4;i+=2)
           rev1=rev1*10+(copy[i]);
         return (rev1+rev);
    
    }
};