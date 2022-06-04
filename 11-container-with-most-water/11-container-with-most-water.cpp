class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int left=0;
        int right=height.size()-1;
        while(left<right)
        {
            int ans=(right-left)*min(height[right],height[left]);
            area=max(area,ans);
            if(height[left]<height[right])
            {
                left++;
            }else{
                right--;
            }
        }
        return area;
    }
};