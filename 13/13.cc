#include <string>
class Solution {
public:
    int romanToInt(string s) {
        std::vector<std::pair<int, std::string>> pairs = {
            {1, "I"},
            {4,"IV"},
            {5,"V"},
            {9,"IX"},
            {10,"X"},
            {40,"XL"},
            {50,"L"},
            {90,"XC"},
            {100,"C"},
            {400,"CD"},
            {500,"D"},
            {900,"CM"},
            {1000,"M"}
        };
        int res = 0;
        int k = pairs.size()-1;
        while(k>=0 && !s.empty()){
            if(s.compare(0,pairs[k].second.length(),pairs[k].second) == 0){
                res+= pairs[k].first;
                s = s.substr(pairs[k].second.length());
            }
            else k--;
        }

    return res;

    }
};