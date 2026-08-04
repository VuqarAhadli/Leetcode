class Solution {
public:

    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> missing ;
        std::sort(nums.begin(),nums.end());

        for(int i = 0;i < nums.size() -1 ;++i)
        {
            for(int j = nums[i] + 1; j < nums[i+1] ; ++j)
            {
                missing.push_back(j);
            }
        }
        return missing;
    }
};
