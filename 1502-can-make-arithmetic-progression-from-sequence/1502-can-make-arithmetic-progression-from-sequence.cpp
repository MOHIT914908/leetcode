class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         int n=arr.size()-1;
        int d=arr[0]-arr[1];
        for(int i=0;i<n;i++)
        {
         int temp=arr[i]-arr[i+1];
            if(temp!=d)
            {
                return false;
            }
        }
        return true;
    }
};