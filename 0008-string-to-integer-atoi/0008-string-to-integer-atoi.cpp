class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();

        // Ignore leading whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Handle sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        long long num = 0;

        // Convert digits
        while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            // Check overflow
            if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return (int)(num * sign);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna