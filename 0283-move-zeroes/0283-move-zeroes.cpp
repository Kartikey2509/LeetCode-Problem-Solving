class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p=0,q=0;
        while(p<nums.size()&&q<nums.size()){
            if(nums[p]==0){
                if(nums[q]!=0){
                swap(nums[p],nums[q]);
                p++;
                q++;
                }
                else{
                    q++;
                }
            }
            else{
                p++;
                q++;
            }

        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna