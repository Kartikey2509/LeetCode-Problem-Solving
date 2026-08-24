class Solution {
public:
    string makeGood(string s) {
        string st;

        for(char c : s){
            if(!st.empty() && abs(st.back()-c) ==32){
                st.pop_back();
            }

            else{
                st.push_back(c);
            }
        }

        return st;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna