class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i =0 ; i<nums.size() ; ++i){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int l = i + 1;
            int r = nums.size()-1;

            while(l<r){
                int s = nums[l] + nums[i] + nums[r];

                if(s==0){ ans.push_back({nums[l], nums[i] , nums[r]});

                while (l < r && nums[l] == nums[l+1]) l++;
                while (l < r&& nums[r] == nums[r-1]) r--;

                r--;
                l++;
                }else if(s<0){
                    l++;
                }else r--;

            }
        }
        return ans;
    }
};