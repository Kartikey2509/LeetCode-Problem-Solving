class Solution {
public:
    
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i =0 ; i<nums.size() ; i++){
            pq.push(nums[i]);
        }

        for(int i =0 ; i<k-1 ; i++){
            pq.pop();
        }

        return pq.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna