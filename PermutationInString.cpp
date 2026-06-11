class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n > m) return false;

        int freq[26] = {0};

        for (char c : s1)
            freq[c - 'a']++;

        int required = n;
        int left = 0;

        for (int right = 0; right < m; right++) {

            if (freq[s2[right] - 'a']-- > 0)
                required--;

            if (right - left + 1 > n) {
                if (++freq[s2[left] - 'a'] > 0)
                    required++;
                left++;
            }

            if (required == 0)
                return true;
        }

        return false;
    }
};