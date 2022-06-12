class Solution {
public:
    int getnum(int n){
         int sum=0;
     while(n>0)
     {
         int rem=n%10;
         sum+=rem*rem;
         n=n/10;
     }
        return sum;
    }
    bool isHappy(int n) {
        while(n!=1 && n!=4)//for time limit
        {
            n=getnum(n);
        }
        if(n==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};