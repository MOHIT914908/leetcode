class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    vector<int>occur;
        sort(arr.begin(),arr.end());
        int count=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{
                occur.push_back(count);
                count=1;
            }
        }
        occur.push_back(count);
        sort(occur.begin(),occur.end());
        for(int i=0;i<occur.size()-1;i++)
        {
            if(occur[i]==occur[i+1]){
                return false;
            }
        }
        return true;
    }
};