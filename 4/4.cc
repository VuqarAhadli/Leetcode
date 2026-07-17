class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged = merge(nums1 ,nums2);
        int n = merged.size();
        if (n % 2 == 0){
            return (merged[n/2]+merged[n/2-1])/2.0;
        }
        return merged[n/2];
    }
    vector<int> merge(vector<int>& nums1, vector<int>& nums2) {
    int i = 0;
    int j = 0;
    vector<int> temp;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            temp.push_back(nums1[i]);
            i++;
        } else {
            temp.push_back(nums2[j]);
            j++;
        }
    }
    while(i<nums1.size()){
        temp.push_back(nums1[i]);
        i++;
    }
    while(j<nums2.size()){
        temp.push_back(nums2[j]);
        j++;
    }
    return temp;
    }
};