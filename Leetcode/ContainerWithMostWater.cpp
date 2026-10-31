//https://leetcode.com/problems/container-with-most-water/description/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1;
        int maximum = 0;
        while(l<r){
            int value = (r-l)*min(height[l], height[r]);
            maximum = max(value, maximum);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }

        return maximum;
    }
};
