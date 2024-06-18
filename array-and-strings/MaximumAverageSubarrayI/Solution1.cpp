class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0;
        if (nums.size() < k) {
            for (int i = 0; i< nums.size(); i++) {
                curr += nums[i];
            }
            return curr / nums.size();
        }
        
        for (int i = 0; i< k; i++) {
            curr += nums[i];
        }
        
        double ans = curr/k;
        
        for (int i = k; i < nums.size(); i++) {
            curr += nums[i] - nums[i-k];
            ans = max(ans, curr/k);
            
        }
        
        return ans;
        
    }
};
