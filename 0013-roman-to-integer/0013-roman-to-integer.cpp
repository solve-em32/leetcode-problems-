class Solution {
public:
    int romanToInt(string s) {
        auto value = [](char c) -> int {
            switch (c) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
                default:  return 0;
            }
        };

        int total = 0;
        int n = static_cast<int>(s.size());

        for (int i = 0; i < n; ++i) {
            int curr = value(s[i]);
            if (i + 1 < n && curr < value(s[i + 1])) {
                total -= curr;
            } else {
                total += curr;
            }
        }

        return total;
    }
};