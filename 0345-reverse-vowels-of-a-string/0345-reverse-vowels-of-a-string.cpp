class Solution {
public:
    string reverseVowels(string s) {
        int left = 0 , right = s.size()-1;
        while(left<right){
            if(s[left]=='A' || s[left]=='E' || s[left]=='I' || s[left]=='O' ||
            s[left]=='U' || s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u'){
                if(s[right]=='A' || s[right]=='E' || s[right]=='I' || s[right]=='O' ||s[right]=='U' || s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u'){
                    swap(s[left],s[right]);
                    left++;
                }
                right--;
            }

            else if(s[right]=='A' || s[right]=='E' || s[right]=='I' || s[right]=='O' ||s[right]=='U' || s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u'){
                if(s[left]=='A' || s[left]=='E' || s[left]=='I' || s[left]=='O' ||
            s[left]=='U' || s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u'){
                swap(s[left],s[right]);
                right--;
            }
            left++;
            }

            else{
                left++;
                right--;
            }
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna