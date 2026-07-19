class Solution {
public:
    void subset(vector<int>& nums, vector<int>& ans, int i,
                vector<vector<int>>& allsubsets) {

        if (i == nums.size()) {
            allsubsets.push_back(ans);
            return;
        }

        // Include nums[i]
        ans.push_back(nums[i]);
        subset(nums, ans, i + 1, allsubsets);

        // Exclude nums[i]
        ans.pop_back();
        subset(nums, ans, i + 1, allsubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsets;
        vector<int> ans;

        subset(nums, ans, 0, allsubsets);

        return allsubsets;
    }
};