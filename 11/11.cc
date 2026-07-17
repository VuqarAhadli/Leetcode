class Solution {
public:
    
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int area = 0;
        auto calcarea = [&](int l, int r){
            return (r - l) * min(height[l], height[r]);
        };
        while(l<r){
            area = max(calcarea(l,r), area);

            if(height[l]<height[r]){
                l++;
            }else r--;
        }
        return area;
    }
};