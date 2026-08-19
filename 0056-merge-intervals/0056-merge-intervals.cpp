class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n=arr.size();
        int st=arr[0][0],end=arr[0][1];
        for(int i=1;i<n;i++){
            if(arr[i][0]<=end){
                end=max(end,arr[i][1]);
            }
            else{
                ans.push_back({st,end});
                st=arr[i][0];
                end=arr[i][1];
            }
        }
        ans.push_back({st,end});
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna