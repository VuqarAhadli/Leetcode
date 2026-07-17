
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxlen = 0;
        for(int j = 0 ; j<s.length();++j){
            unordered_set<char> set{};
        for(int i = j; i<s.length();++i){
            if(set.count(s[i])) break;
            set.insert(s[i]);
            if(maxlen < set.size()) {
                maxlen = set.size();
            }
        }}
            
        return maxlen;
        }
    
};