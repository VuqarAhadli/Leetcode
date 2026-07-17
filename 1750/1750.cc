class Solution {
public:
    int minimumLength(string s) {
        if(s.length() == 1) return 1;
        int l = 0; 
        int r = s.length()-1;

        while (s[l]==s[r] && l<r) {

            char temp = s[l];
            while(s[l]==temp && l<=r){
                l++;
            }             
            while(s[r]==temp && l<=r){
                r--;
            } 
        }
        return max(0, r - l + 1);

    }
};