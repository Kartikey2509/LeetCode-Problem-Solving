class Solution {
public:

   vector<int>  mergeSort(vector<int>& nums,int lb , int ub){
        if(lb>=ub){
            return {nums[lb]};
        }
        int mid = lb+(ub-lb)/2;
        vector<int> left = mergeSort(nums,lb,mid);
        vector<int> right = mergeSort(nums,mid+1,ub);
        return merge(left,right);
    }

    vector<int> merge(vector<int> &left ,vector<int> &right){
        int i = 0 , j=0;
        vector<int> result;
        while(i<left.size()&&j<right.size()){
            if(left[i]<=right[j]){
                result.push_back(left[i]);
                i++;
            }
            else{
                result.push_back(right[j]);
                j++;
            }
        }

        while(i<left.size()){
            result.push_back(left[i]);
            i++;
        }

        while(j<right.size()){
            result.push_back(right[j]);
            j++;
        }

        return result;
    }

    vector<int> sortArray(vector<int>& nums) {
        if(nums.empty()){
            return{};
        }
        return mergeSort(nums,0,nums.size()-1);

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna