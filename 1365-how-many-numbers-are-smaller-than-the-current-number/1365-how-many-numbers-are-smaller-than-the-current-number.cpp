class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;

        // Sort the copy
        sort(sorted.begin(), sorted.end());

        vector<int> result;

        for (int num : nums) {
            int low = 0;
            int high = sorted.size() - 1;
            int pos = sorted.size();

            //  lower_bound
            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (sorted[mid] >= num) {
                    pos = mid;
                    high = mid - 1;
                } 
                else {
                    low = mid + 1;
                }
            }

            result.push_back(pos);
        }

        return result;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna