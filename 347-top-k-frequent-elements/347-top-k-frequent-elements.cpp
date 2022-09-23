class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        vector<int>arr;
        while(k--)
        {
            arr.push_back(pq.top().second);
            pq.pop();
        }
        return arr;  
      
    }
};