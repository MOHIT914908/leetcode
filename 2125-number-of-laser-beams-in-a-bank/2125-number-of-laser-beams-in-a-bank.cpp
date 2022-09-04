class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        vector<int>a;
        for(int i=0;i<bank.size();i++)
        {
                    int count =0;
            for(int j=0;j<bank[0].size();j++)
            {
                if(bank[i][j]=='1')
                {
                    count++;
                }
            }
            if(count>0)
            {
                a.push_back(count);
            }
        }
        for(int i=1;i<a.size();i++)
        {
            ans+=a[i-1]*a[i];
        }
        return ans;
    }
};