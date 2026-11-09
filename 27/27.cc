class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty())
        {
            return 0;
        }
        int x = 0;
        size_t vec_s = nums.size();
        for (int i = 0; i < vec_s; ++i)
        {
            label:
            if (i == vec_s - 1)
            {
                if (nums[i] == val)
                {
                    break;
                }
            }
            while (nums[i] == val) 
            { 
                if (i == vec_s -1)
                {
                    goto label;
                }
                i++;
            }

            nums[x] = nums[i];
            x++;
        }
        return x; 
    }
};
