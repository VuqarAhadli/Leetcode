class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size(); ++i) {

            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                int s = nums[i] + nums[l] + nums[r];

                if (abs(target - s) < abs(target - closest)) {
                    closest = s;
                } 
                if (s < target) {
                    l++;
                } 
                else if (s > target) {
                    r--;
                } 
                else {
                    return s; 
                }
            }
        }
        return closest;
    }
};