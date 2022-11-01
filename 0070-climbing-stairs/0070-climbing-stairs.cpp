class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
     int prev=1,cur=2;
        for(int i=3;i<=n;i++)
        {
            int temp=prev+cur;
            prev=cur;
            cur=temp;
        }
        return cur; 
    }
};