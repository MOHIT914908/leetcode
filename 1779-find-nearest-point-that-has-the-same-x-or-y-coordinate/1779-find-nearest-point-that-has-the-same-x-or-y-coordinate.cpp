class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
        int min=100000;
        int index;
        for(int i=0;i<n;i++)
        {
         if(x==points[i][0] || y==points[i][1])
         {
             int d=abs(x-points[i][0]+y-points[i][1]);
             if(d<min)
             {
                 min=d;
                 index=i;
             }
         }
        }
        if(min==100000)return -1;
        return index;    
    }
};