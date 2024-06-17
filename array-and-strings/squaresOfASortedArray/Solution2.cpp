class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        vector<int>sorted;
        int mult1;
        int mult2;
        while (i <= j){
            mult1 = nums[i] * nums[i];
            mult2 = nums[j] * nums[j];
            if (mult1 < mult2) {
                sorted.insert(sorted.begin(), mult2);
                j--;
            }
            else {
                sorted.insert(sorted.begin(), mult1);
                i++;
            }
        }
        return sorted;
        
    }
};
