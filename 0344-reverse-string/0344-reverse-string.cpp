class Solution {
public:
    inline void reverseString(vector<char>& s) const noexcept {
        auto len = s.size();
        for (int i = 0; i < len / 2; i++) {
            char temp = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = temp;
        }
    }
};