class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;

        for (long long p = 1000; p <= n; ) {
            count += n - p + 1;

            // Prevent overflow
            if (p > n / 1000)
                break;

            p *= 1000;
        }

        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna