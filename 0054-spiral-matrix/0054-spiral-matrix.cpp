class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat[0].size()-1 , m=mat.size()-1;
        int srow=0 , scol=0 , erow=m , ecol=n;
        vector<int> ans;
        while(srow<=erow && scol<=ecol){
            // Top  
            for(int j=scol ; j<=ecol ; j++){
                ans.push_back(mat[srow][j]);
            }

            //Right

            for(int i=srow+1 ; i<=erow ; i++){
                ans.push_back(mat[i][ecol]);
            }

            // Bottom
            if (srow < erow) {
                for (int j = ecol - 1; j >= scol; j--) {
                    ans.push_back(mat[erow][j]);
                }
            }

            // Left
            if (scol < ecol) {
                for (int i = erow - 1; i > srow; i--) {
                    ans.push_back(mat[i][scol]);
                }
            }
            srow++; erow--; scol++ ; ecol--;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna