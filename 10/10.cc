class Solution {
public:
    bool isMatch(string s, string p) {
        return dp(0, 0, s, p);
    }

private:
    unordered_map<string, bool> memo;

    bool dp(int i, int j, const string& s, const string& p) {
        string key = to_string(i) + "," + to_string(j);
        if (memo.count(key)) return memo[key];

        if (j == p.size()) {
            return memo[key] = (i == s.size());
        }

        bool first_match = (i < s.size() && (s[i] == p[j] || p[j] == '.'));

        bool ans;
        if (j + 1 < p.size() && p[j+1] == '*') {
            ans = dp(i, j+2, s, p) || (first_match && dp(i+1, j, s, p));
        } else {
            ans = first_match && dp(i+1, j+1, s, p);
        }

        memo[key] = ans;
        return ans;
    }
};