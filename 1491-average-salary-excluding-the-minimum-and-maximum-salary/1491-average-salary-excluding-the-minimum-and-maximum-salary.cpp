class Solution {
public:
    double average(vector<int>& salary) {
     double sum=0,avg=0;
      int n=salary.size();
        sort(salary.begin(),salary.end());
        double min=salary[0],max=salary[n-1];
     for(int i=0;i<n;i++)
     {
         sum+=salary[i];
     }
        avg=sum-(max+min);
       return (avg/(n-2)); 
    }
};