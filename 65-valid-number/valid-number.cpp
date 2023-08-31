#include <string>
using namespace std;

class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
        int i = 0;

        // Remove leading and trailing whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }
        while (n > i && s[n - 1] == ' ') {
            n--;
        }

        bool seenDigits = false;
        bool seenDot = false;
        bool seenE = false;

        for (; i < n; i++) {
            char c = s[i];

            if (isdigit(c)) {
                seenDigits = true;
            } else if (c == '+' || c == '-') {
                if (i > 0 && (s[i - 1] != 'e' && s[i - 1] != 'E')) {
                    return false;
                }
            } else if (c == '.') {
                if (seenDot || seenE) {
                    return false;
                }
                seenDot = true;
            } else if (c == 'e' || c == 'E') {
                if (seenE || !seenDigits) {
                    return false;
                }
                seenE = true;
                seenDigits = false; // Reset seenDigits for the exponent part
            } else {
                return false;
            }
        }

        return seenDigits;
    }
};
