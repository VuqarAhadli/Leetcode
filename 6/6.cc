class Solution {
public:
    string convert(string s, int numRows) {
        string res = "";
        if(numRows == 1) return s;
        int n = s.length();
        for(int rowthing = 0 ; rowthing < numRows; ++rowthing){
            for(int i = rowthing ; i<n;i+=2 * (numRows - 1)) {
                res += s[i];

                int j = i + (2 * (numRows - 1)) - 2 * rowthing;
                if (rowthing != 0 && rowthing != numRows - 1 && j < n) {
                    res += s[j];}
            } }
    return res;
    }
};