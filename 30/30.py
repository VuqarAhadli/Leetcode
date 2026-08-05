class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        targetLen = len(words[0]) * len(words)
        wordLen = len(words[0])

        indices = []
        freqs = Counter(words)

        windows = [s[i:i+targetLen] for i in range(len(s) - targetLen + 1)]

        for i in range(len(windows)):
            subWindows = [windows[i][x:x+wordLen] for x in range(0,targetLen, wordLen)]

            freqs_i = Counter(subWindows)

            if freqs == freqs_i:
                indices.append(i)
                
        return indices
