class Solution {
public:
    void reverseString(vector<char>& s) {
    int j=s.size()-1;
    int i=0;
        while(i<=j)
        {
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
};