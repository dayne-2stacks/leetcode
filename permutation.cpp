class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> solution;
        vector<int> permutation;
        vector<bool> chosen(nums.size(), false);
        search(solution, permutation, chosen, nums);
        return solution;
    }
    
    void search(vector<vector<int>>& solution, vector<int>& permutation, vector<bool>& chosen, vector<int>& nums ) {
        int n= nums.size();
        
        if (permutation.size() == n) {
            solution.push_back(permutation);
        } else {
            for (int i = 0; i< n; i++){
                if ((chosen[i]) == true ) continue;
                chosen[i] = true;
                permutation.push_back(nums[i]);
                search(solution, permutation, chosen, nums);
                chosen[i] = false;
                permutation.pop_back();
                
            }
        }
    }
};
