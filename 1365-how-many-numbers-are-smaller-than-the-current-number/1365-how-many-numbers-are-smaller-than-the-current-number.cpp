class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        
        for(int i=0 ; i<nums.size(); i++){
            int count=0;
            for(int j=0 ; j<nums.size();j++){
                if(nums[j]<nums[i]){
                    count++;
                }
                
            }
            result.push_back(count);
        }
    return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna