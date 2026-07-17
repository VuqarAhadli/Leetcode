class Solution {
public:
    string intToRoman(int num) {
        std::string res =  "";
        std::vector<std::pair<int, std::string>> pairs = {
            {1, "I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}
        };
        int k = pairs.size();
        while(num){
            if(num / pairs[k-1].first){
                for (int i =0 ; i < num / pairs[k-1].first; ++i ){
                res.append(pairs[k-1].second);}
            }
            num %= pairs[k-1].first;
            k--;
        }
        return res;
    }
};