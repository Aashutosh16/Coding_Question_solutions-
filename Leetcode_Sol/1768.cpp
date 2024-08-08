// 1768. Merge Strings Alternately

// Solution-

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        string ans = "";

        // Use a single loop to handle both alternating and remaining characters
        for (int i = 0; i < n || i < m; ++i) {
            if (i < n) ans += word1[i];
            if (i < m) ans += word2[i];
        }

        return ans;
    }
};
