class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0)
            return 0;
        if (needle.length() > haystack.length())
            return -1;
        if (needle.length() == 1 && haystack.length() == 1 && needle[0] == haystack[0])
            return 0;
        size_t h = haystack.length();
        size_t n = needle.length();

        for (int i = 0; i < h; ++i)
        {
            int pos = i;
            for (int x = 0; x < n; ++x)
            {
                if (haystack[pos] == needle[x])
                {
                    pos++;
                }
                else
                {
                    break;
                }
            }
            if (pos - i == n)
            {
                return pos - n;
            }
        }

        return -1;
    }
};
