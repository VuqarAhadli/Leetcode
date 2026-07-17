class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        unordered_map<char, string> dig = {
            {'2',"abc"}, {'3',"def"}, {'4',"ghi"},
            {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"},
            {'8',"tuv"}, {'9',"wxyz"}
        };

        vector<string> ans;
        string current;

        backtrack(digits, 0, dig, current, ans);
        return ans;
    }

    void backtrack(string& digits, int index,
                   unordered_map<char,string>& dig,
                   string& current,
                   vector<string>& ans) {

        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        for (char c : dig[digits[index]]) {
            current.push_back(c);
            backtrack(digits, index + 1, dig, current, ans);
            current.pop_back(); 
        }
    }
};