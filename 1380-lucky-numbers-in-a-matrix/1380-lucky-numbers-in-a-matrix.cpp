class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
          vector<int> ans;
    
    for(vector<int> r : matrix){
        int mn = INT_MAX, mx = INT_MIN, pos;
        
        for(int j=0; j<r.size(); j++){
            if(mn > r[j]){
                mn = r[j];
                pos = j;
            }
        }
        for(int i=0; i<matrix.size(); i++){
            mx = max(mx, matrix[i][pos]);
        }
        if(mn == mx) ans.push_back(mn);
    }
    return ans;
    }
};