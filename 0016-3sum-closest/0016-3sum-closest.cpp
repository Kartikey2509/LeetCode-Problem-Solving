class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int cs = nums[0]+nums[1]+nums[2];
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size() ; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int left=i+1;
            int right=nums.size()-1;

            while(left<right){
                int ts = nums[i]+nums[left]+nums[right];

                if(abs(cs-target)>abs(ts-target)){
                    cs=ts;
                }
                if(ts>target){
                    right--;
                }
                else if(ts<target){
                    left++;
                }
                else{
                    return cs;
                }
            }
        }
        return cs;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna