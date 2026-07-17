class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int neg = 1;

        while(i<s.length() && s[i]== ' ') i++;
        if(i==s.length())return 0;
        if(s[i] == '-'){ neg = -1; i++;}
        else if(s[i] == '+'){  i++;}
        int res = 0;
        while(i < s.length() && s[i]>='0' && s[i]<= '9') {
            int dig = s[i] - '0';
            if(res > (INT_MAX - dig)/10){
                return neg == 1 ? INT_MAX : INT_MIN;
            }

            res = res*10 + dig;
            i++;
        }
        return res*neg;
    } 
};