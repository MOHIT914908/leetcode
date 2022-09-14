class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
      int id,c=0;
        if(ruleKey=="type"){
            id=0;
        }
        else if (ruleKey=="color"){
            id=1;
        }
        else{
            id=2;
        }
        for(int i=0;i<items.size();i++)
        {
            if(items[i][id]==ruleValue){
                c++;
            }
        }
        return c;
    }
};