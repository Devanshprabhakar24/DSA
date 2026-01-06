class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> count(26, 0);

        for (char ch : s) {
            count[ch - 'a']++;
        }

        for (char ch : t) {
            count[ch - 'a']--;
        }

        return all_of(count.begin(), count.end(), [](int x) {
            return x == 0;
        });
    }
};
