class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
     double s=find(coordinates[0],coordinates[1]);
        for(int i=2;i<coordinates.size();i++)
        {
            if(s!=find(coordinates[0],coordinates[i])){
                return false;
            }
        }
        return true;
    }
   float find(vector<int>p1,vector<int>p2)
    {
       if(p1[0]==p2[0]){
           return 10000;
       }
        return ((p1[1]-p2[1])*1.0)/((p1[0]-p2[0]*1.0));
    }
};
