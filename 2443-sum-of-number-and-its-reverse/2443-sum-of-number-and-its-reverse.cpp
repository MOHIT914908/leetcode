class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int n,r;
        if(num==0) return true;
        for(int i=0;i<num;i++)
        {
          n=i;
          r=0;
            while(n)
            {
                r=n%10+r*10;
                n=n/10;
            }
            if(i+r==num) return true;
        }
        return false;
    }
};