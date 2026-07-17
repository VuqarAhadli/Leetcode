class Solution {
public:
    bool isPalindrome(int x) {
        int k = x;
        int res = 0;
        if (k<0) return false;
        while(k){
            int dig = k % 10;
            if (res > (INT_MAX ) / 10) return false;
            res = res * 10 + dig;
            k /= 10;
        }
        return x == res;
    }
};