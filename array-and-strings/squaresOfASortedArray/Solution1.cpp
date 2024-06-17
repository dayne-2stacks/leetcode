class Solution {
public:
    int square(int &base) {
        return pow(base, 2);
    }
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        vector<int> ans;
        
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                
                ans.insert(ans.begin(),square(nums[left]));
                left++;
            } else {
                ans.insert(ans.begin(), square(nums[right]));
                right--;
            }
            
        }
        return ans;
    }
};
