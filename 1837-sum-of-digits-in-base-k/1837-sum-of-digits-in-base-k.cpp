class Solution {
public:
    int sumBase(int n, int k) {
       int sum=0;
        while(n)
        {
            sum+=n%k;
            n=n/k;
        }
        return sum;
    }
};