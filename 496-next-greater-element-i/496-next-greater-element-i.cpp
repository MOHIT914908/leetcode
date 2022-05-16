class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int>ans;
        int n1=nums1.size(),n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            { 
                if(nums1[i]==nums2[j])
                {
                 int temp=-1;
                  for(int k=j+1;k<n2;k++)
                  {
                      if(nums2[k]>nums2[j])
                      {
                          temp=nums2[k];
                          break;
                      }
                  }
                ans.push_back(temp);
                }
            }
        }
        return ans; 
    }
};