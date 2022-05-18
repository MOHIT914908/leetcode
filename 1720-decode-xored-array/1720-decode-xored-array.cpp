class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decode(encoded.size()+1);
        decode[0]=first;
        for(int i=0;i<encoded.size();i++)
        {
            decode[i+1]=encoded[i]^decode[i];
        }
        return decode;
    }
};