class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        string ans;
        int l1=a.size()-1;
        int l2=b.size()-1;
        while(l1>=0 || l2>=0)
        {
            int sum=c;
            if(l1>=0)
            {
                sum+=a[l1--]-'0';
            }
            if(l2>=0)
            {
                sum+=b[l2--]-'0';
            }
            ans.push_back(sum%2+'0');
            c=sum/2;
        }
        if(c!=0)
        {
            
            ans.push_back(c+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};