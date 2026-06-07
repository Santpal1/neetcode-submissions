class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> m;
        for (auto c : s1) {
            m[c]++;
        }
        int left = 0;
        int right = s1.size();
        while (right <= s2.size()) {
            unordered_map<char, int> m2;
            for (int i = left; i < right; ++i) {
                m2[s2[i]]++;
            }
            if (m == m2) return true;
            left++;
            right++;
        }
        return false;
    }
};
