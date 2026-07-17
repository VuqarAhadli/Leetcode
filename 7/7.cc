class Solution {
public:
    int reverse(int x) {
        int k = x;
        int res = 0;
        while (k!=0){
            if (res > INT_MAX / 10 || res < INT_MIN / 10) {
                return 0;
            }
            res = res*10 + k%10;
            k = k/10;
        }
        return res;
    }
};