class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>p;
        for(int i=0;i<names.size();i++)
        {
            p.push_back({heights[i],names[i]});
        }
        sort(p.rbegin(),p.rend());
        vector<string>sol;
        for(int i=0;i<names.size();i++)
        {
            sol.push_back(p[i].second);
        }
        return sol;
    }
};
