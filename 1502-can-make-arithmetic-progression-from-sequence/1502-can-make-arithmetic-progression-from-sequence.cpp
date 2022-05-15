class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         int n=arr.size()-1;
        int dif=arr[0]-arr[1];
        for(int i=0;i<n;i++)
        {
            int temp=arr[i]-arr[i+1];
            if(temp!=dif)
            {
                return false;
            }
        }
        return true;
    }
};