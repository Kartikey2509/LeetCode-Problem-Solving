class Solution {
public:
    int countCommas(int n) {
        int count=0;
        for(int i=1000 ; i<=n ; i++){
            int temp=i;
            while(temp>=1000){
                count++;
                temp=temp/1000;
            }
        }

        return count;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna