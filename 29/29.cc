class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        long long res = 0;
        long long div = llabs((long long)dividend);
        long long divi = llabs((long long) divisor);


        while(div >= divi){
            long long temp = divi;
            long long multiple = 1;
            while ((temp << 1) <= div)
            {
                temp <<= 1;
                multiple <<= 1;
            }
            div -= temp;
            res += multiple;
        }


        if ((dividend < 0) ^ (divisor < 0)) res = -res;
        return (int)res;
    }
};